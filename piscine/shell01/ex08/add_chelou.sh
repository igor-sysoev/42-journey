#!/bin/zsh
FT_NBR1=\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"
FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
echo $FT_NBR1 + $FT_NBR2 | tr 'mrdoc' '01234' | tr ''\''\\\"?!' "01234" | sed 's/^/obase=13; ibase=5; /' | bc | tr '0123456789ABC' 'gtaio luSnemf' 
