#!/bin/zsh
FT_LINE1=1
FT_LINE2=3
cat /etc/passwd | grep -v '#' | sed '0d' | awk 'NR%2==0' | grep -o "^.*\:\*" | rev | tr -d '*:' | sort -r | sed -n "${FT_LINE1}, ${FT_LINE2}p" | tr '\n' ','| sed  's/,/, /g' | sed '$s/, $/./'
