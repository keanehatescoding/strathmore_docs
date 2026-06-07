#!/usr/bin/env bash
for file in /bin/**; do
	valgrind "$file"
done
