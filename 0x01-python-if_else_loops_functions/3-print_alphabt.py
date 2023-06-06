#!/usr/bin/python3
for ch in range(97, 123):
    if ch == ord('e') or ch == ord('q'):
        continue
    print("{}".format(chr(ch)), end="")
