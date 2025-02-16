def generate_triangule(x, previous):
    previous_sum = sum(previous)
    x_list = previous + [x]
    x_triangule = previous_sum + x
    return x_triangule, x_list


def find_divisors(x):
    divisors = 1
    for i in range(1, x):
        if x % i == 0:
            divisors = divisors + 1
    return divisors

def main():
    acc = [0]
    i = 1
    x = 1
    divisors = 0
    while divisors < 500:
        acc.append(1)
        x, acc = generate_triangule(i, acc)
        divisors = find_divisors(x) 
        print(i, x, divisors)
        i = i + 1
    return x

main()

