#!/bin/bash

git add .

if [ -z "$1" ]; then
	echo "base commit message has been set"
	git commit -m "committed without message."
else
	git commit -m "$1"
fi

git push
