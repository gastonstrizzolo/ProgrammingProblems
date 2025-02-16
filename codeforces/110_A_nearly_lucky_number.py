lucky_numbers = 0
n = input()
for digit in n:
    if digit == '4' or digit == '7':
        lucky_numbers = lucky_numbers + 1
if lucky_numbers == 4 or lucky_numbers == 7:
    print("YES")
else:
    print("NO")