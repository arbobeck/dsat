#!/usr/bin/env python3

def fizzbuzz(n):
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz")
        elif i % 3 == 0:
            print("Fizz")
        elif i % 5 == 0:
            print("Buzz")
        else:
            print(i)

try:
    n = int(input("Enter a number to count until: "))
    fizzbuzz(n)
except ValueError:
    print("Please enter a valid integer.")
