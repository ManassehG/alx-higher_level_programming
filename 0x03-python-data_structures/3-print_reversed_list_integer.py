#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    if my_list is None:
        return
    for i in (my_list):
        print("{:d}".format(my_list[-i]))
