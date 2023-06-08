#!/usr/bin/python3
from sys import argv
from calculator_1 import (add, sub, div, mul)

if __name__ == '__main__':
    operations = {
        "+": add,
        "*": mul,
        "/": div,
        "-": sub
    }
    args = argv[1:]
    if len(args) != 3:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)
    operation = operations.get(args[1])
    if not operation:
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)
    print("{} {} {} = {}".format(*args, operation(int(args[0]), int(args[2]))))
