#!/bin/bash

n=100
k=700

while true; do
    test_case=$(shuf -i 1-10000 -n "$n" | tr '\n' ' ')
    out=$(echo "$test_case" | xargs ./push_swap)
    lines=$(echo "$out" | wc -l)

    if [ "$lines" -gt "$k" ]; then
        echo "Test case: $test_case"
        exit 1
    fi
done

