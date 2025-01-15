# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isysoev <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 09:58:34 by isysoev           #+#    #+#              #
#    Updated: 2025/01/10 10:55:28 by isysoev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
readonly GREEN='\033[38;5;84m'
readonly RED='\033[38;5;197m'
readonly RESET='\033[0m'
readonly YELLOW='\033[0;33m'
readonly BLUE='\033[0;34m' 
readonly BWhite='\033[1;37m'

total=0
failed=0
passed=0

echo "${YELLOW}Running tests for ft_tail.c ...\n${RESET}"
function run_test () {
	local	test_name="$1"
	local	expected="$2"
	local	actual="$3"
	total=$((total + 1))
	echo "${Bwhite}Test: ${test_name}"
	if [ "$expected" == "$actual" ]; then
		echo "${GREEN}Passed!${RESET}"
		passed=$((passed + 1))
	else
		echo "${RED}Failed!${RESET}"
		echo "Expected output: ${expected}"
		echo "Actual: ${actual}"
		failed=$((failed + 1))
	fi
}

# Generate test files
echo "Test text with multiple lines that can be added and deleted" > test.txt
echo "Simple small text with stuff" > test2.txt
echo "Third time is the charm my man!" > test3.txt

# Basic Cases

# Normal case with single file
expected=$(tail -c 10 ./test.txt)
actual=$(./ft_tail -c 10 ./test.txt)
run_test "Basic 10 byte tail" "$actual" "$expected"

# Multiple files
expected="d deleted\nith stuff\nrm my man"
actual=$(./ft_tail ./test.txt ./test2.txt ./test3.txt)
run_test "Multipel files" "$actual" "$expected"

# Cleanup files
rm -f ./test*.txt

# Print total
echo "${passed}/${total} passed"
