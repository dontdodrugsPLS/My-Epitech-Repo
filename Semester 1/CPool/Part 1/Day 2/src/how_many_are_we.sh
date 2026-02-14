#!/bin/bash

if [ -z "$1" ]; then
	cut -d ";" -f "3" | grep -ci "" 
else
	cut -d ";" -f "3" | grep -ci "$1"
fi

