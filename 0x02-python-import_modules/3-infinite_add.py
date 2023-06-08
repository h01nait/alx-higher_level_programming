#!/usr/bin/python3
import sys

if __name__ == "__main__":
    args = sys.argv[1:]
    sum_of_args = sum(map(int, args))

print(sum_of_args)
