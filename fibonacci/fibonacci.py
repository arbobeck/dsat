#!/usr/bin/env python3

def generate_fibonacci(n):
    fibonacci_sequence = []
    if n <= 0:
        return fibonacci_sequence
    elif n == 1:
        fibonacci_sequence.append(0)
    else:
        fibonacci_sequence.extend([0, 1])
        while len(fibonacci_sequence) < n:
            next_number = fibonacci_sequence[-1] + fibonacci_sequence[-2]
            fibonacci_sequence.append(next_number)
    return fibonacci_sequence

# Example usage:
n = int(input("Enter the number of Fibonacci numbers to generate: "))
fibonacci_sequence = generate_fibonacci(n)
print(f"Fibonacci sequence of length {n}:")
print(fibonacci_sequence)
