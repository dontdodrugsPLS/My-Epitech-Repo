#!/bin/bash

sed 1d | sed 2~2d | cut -d ":" -f 1 | rev | sort -r | sed -n "$MY_LINE1","$MY_LINE2"p | sed -z "s/\n/, /g" | sed "s/,.$/.\n/g"
