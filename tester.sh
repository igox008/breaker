#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: $0 <n> <k>"
    echo "  n: number of random integers to generate"
    echo "  k: maximum allowed number of operations"
    exit 1
fi

n=$1
k=$2

if ! [[ "$n" =~ ^[1-9][0-9]*$ ]] || ! [[ "$k" =~ ^[1-9][0-9]*$ ]]; then
    echo "Error: Both n and k must be positive integers"
    exit 1
fi

while true; do
    test_case=$(shuf -i 1-10000 -n "$n" | tr '\n' ' ')
    out=$(echo "$test_case" | xargs ./push_swap)
    lines=$(echo "$out" | wc -l)

    if [ "$lines" -gt "$k" ]; then
        echo "Test case: $test_case"
        exit 1
    fi
done
