# A palindromic number reads the same both ways. The largest palindrome made from the
# product of two 2-digit numbers is 9009 = 91 × 99.
# Find the largest palindrome made from the product of two 3-digit numbers.

def get_digits(n):
    return [int(d) for d in str(n)]


def check_first_and_last(l):
    result = False
    if l[0] == l[-1]:
        result = True
    return result


def is_palindrome(n):
    digits = get_digits(n)
    is_palindromic = True
    length = len(digits)
    i = 0
    if length % 2 == 0:
        large = length / 2
    else:
        large = length / 2 + 1
    while i < large and is_palindromic and len(digits) > 1:
        if check_first_and_last(digits):
            i = i + 1
            digits = digits[1:-1]
        else:
            is_palindromic = False
    return is_palindromic


def wheel_method_factorization(n):
    factors = []
    while n % 2 == 0:
        factors.append(2)
        n = n / 2
    while n % 3 == 0:
        factors.append(3)
        n = n / 3
    while n % 5 == 0:
        factors.append(5)
        n = n / 5
    k = 7
    i = 0
    while k * k <= n:
        if n % k == 0:
            factors.append(k)
            n = n / k
        else:
            k = k + i + 1
            if i < 7:
                i = i + 1
            else: 
                i = 0
    if n > 1:
        factors.append(n)
    return factors

# conditions are:
# must be a product of two numbers
# and the number must have 3 digits
def check_conditions(list_of_factors):
    result = False
    if len(list_of_factors) == 2:
        if list_of_factors[0] > 99 and list_of_factors[0] < 1000 and \
           list_of_factors[1] > 99 and list_of_factors[1] < 1000:
            result = True
    return result

def find_largest_palindrome():
    x = 998001 # 999 * 999
    while x > 1:
        if is_palindrome(x):
            factors = wheel_method_factorization(x)
            print(x, "\t", factors)
            if check_conditions(factors):
                return x
        x = x - 1


def find2():
    a = 101
    largest = 0
    while a < 1000:
        b = 101
        while b < 1000:
            x = a * b
            print(x, a, b)
            if is_palindrome(x):
                largest = x
            b = b + 1
        a = a + 1
    print("saliendo")
    return largest


print(find2())
