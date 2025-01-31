/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isysoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:20:18 by isysoev           #+#    #+#             */
/*   Updated: 2025/01/31 12:19:27 by isysoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}		t_btree;

typedef struct s_queue
{
	t_btree		*nodes[10000];
	int			head;
	int			tail;
}	t_queue;

t_btree	*btree_create_node(void *item);
void	btree_apply_prefix(t_btree *node, void (*applyfn)(void *));
void	btree_apply_infix(t_btree *node, void (*applyfn)(void *));
void	btree_apply_suffix(t_btree *node, void (*applyfn)(void *));
void	btree_insert_data(t_btree **root, void *item, int (*cmpfn)(void *, void *));
void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpfn)(void *, void *));
int		btree_level_count(t_btree *root);
void	btree_apply_by_level(t_btree *root, void (*applyfn)(void *item, int current_level, int is_first));
