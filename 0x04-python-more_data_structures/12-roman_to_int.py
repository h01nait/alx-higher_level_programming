#!/usr/bin/python3
def roman_to_int(roman_string):
    if not roman_string or not isinstance(roman_string, str):
        return 0
    roman_list = ["M", "CM", "D", "CD",
                  "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]
    roman_dict = dict(zip(roman_list,
                          (1000, 900, 500, 400,
                           100, 90, 50, 40, 10, 9, 5, 4, 1)))
    i = 0
    total = 0
    while i < len(roman_string):
        for roman in roman_list:
            index = i + len(roman)
            if index <= len(roman_string) and roman_string[i:index] == roman:
                i += len(roman)
                total += roman_dict[roman]
                break
    return total
