#!/usr/bin/python3
from sys import argv

if __name__ == '__main__':
    args = argv[1:]
    print("{} argument{}{}".format(
        len(args),
        's' if len(args) != 1 else '',
        ':' if len(args) else '.')
        )
    for index, arg in enumerate(args):
        print("{}: {}".format(index+1, arg))
