# file: FizzBuzz.py
#
# author: Josh Grant 2016
#
# FizzBuzz (with arguments) in Python 2.7.10

from sys import argv

script, first, last = argv

first = int(first)
last = int(last) + 1

for i in range(first, last):
    if (i % 3 == 0) and (i % 5 != 0):
        print "Fizz"
    elif (i % 3 != 0) and (i % 5 == 0):
        print "Buzz"
    elif (i % 15 == 0):
        print "FizzBuzz"
    else:
        print i