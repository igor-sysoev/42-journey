/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:43:59 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/31 12:20:15 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_btree.h>
#include <stdlib.h>

t_queue *init_queue(void)
{
	t_queue	*queue;

	queue = malloc(sizeof(t_queue));
	queue->head = 0;
	queue->tail = 0;
	return (queue);
}

void	enqueue(t_queue *queue, t_btree *node)
{
	queue->nodes[queue->tail] = node;
	queue->tail += 1;
}

t_btree	*dequeue(t_queue *queue)
{
	t_btree	*node;

	node = queue->nodes[queue->head];
	queue->head += 1;
	return (node);
}

void	btree_apply_by_level(t_btree *root,
void (*applyfn)(void *item, int current_level, int is_first))
{
	t_queue	*queue;
	t_btree	*current_node;
	int		current_level_items;
	int		next_level_items;
	int		current_level;
	int		is_first;

	current_level_items = 1;
	next_level_items = 0;
	is_first = 1;
	current_level = 0;
	queue = init_queue();
	enqueue(queue, root);
	while (queue->tail != queue->head)
	{
		current_node = dequeue(queue);
		if (current_node->left)
		{
			next_level_items++;
			enqueue(queue, current_node->left);
		}
		if (current_node->right)
		{
			enqueue(queue, current_node->right);
			next_level_items++;
		}
		applyfn(current_node->item, current_level, is_first);
		is_first = 0;
		current_level_items--;
		if (current_level_items == 0)
		{
			current_level++;
			current_level_items = next_level_items;
			next_level_items = 0;
			is_first = 1;
		}
	}
}
