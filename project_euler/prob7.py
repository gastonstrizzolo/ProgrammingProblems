# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
# What is the 10 001st prime number?

import math

def primeCheck(x):
    isPrime = True
    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            isPrime = False
            break
    return isPrime


def find():
    prime_counter = 1
    prime_numbers = [2]
    x = 3
    while prime_counter != 10001:
        if primeCheck(x):
            print(prime_counter, x)
            prime_numbers.append(x)
            prime_counter = prime_counter + 1
        x = x + 2
    return prime_counter, prime_numbers[-1]

print(find())
