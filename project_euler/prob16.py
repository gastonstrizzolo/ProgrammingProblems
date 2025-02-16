# 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
# What is the sum of the digits of the number 2^1000?

from math import pow

def get_digits(n):
    return [int(d) for d in str(n)]

def find():
    digits = get_digits(pow(2, 1000))
    return sum(digits)

print(find())