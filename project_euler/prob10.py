# The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
# Find the sum of all the primes below two million.

import math

def primeCheck(x):
    isPrime = True
    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            isPrime = False
            break
    return isPrime

def get_primes_bellow(n):
    primes_list = []
    for x in range(0, n + 1):
        if primeCheck(x):
            print(x)
            primes_list.append(x)
    return primes_list

def find():
    return sum(get_primes_bellow(2000000))


def find2():
    acc = 0
    for x in range(2, 2000000):
        if primeCheck(x):
            acc = acc + x
            print(acc)
    return acc


print(find2())
