# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 
# without any remainder.
# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

def is_divisible(n):
    result = True
    divisors = [20, 19, 18, 17, 16, 14, 13, 11]
    factors = []
    i = 0
    while i <= (len(divisors) - 1) and result:
        if n % divisors[i] != 0 and result:
            result = False
        factors.append(divisors[i])
        i = i + 1
    print(factors)
    return result


def find():
    x = 2520
    while True:
        print(x)
        if is_divisible(x):
            break
        x = x + 20

print(find())