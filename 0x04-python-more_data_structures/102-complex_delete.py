#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    keys = [key for key, d_value in a_dictionary.items() if d_value == value]
    for key in keys:
        a_dictionary.pop(key)
    return a_dictionary
