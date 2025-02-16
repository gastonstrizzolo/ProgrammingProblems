# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?

from typing import List

def factorization(n) -> List[int]:
    result = []
    i = 2
    while n > 2:
        if n % i == 0:
            if i not in result:
                result.append(i)
            n = n / i
        else:
            i = i + 1
    return result

prime_factors = factorization(600851475143)

print(prime_factors[-1])
