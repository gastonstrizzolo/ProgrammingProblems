n = int(input())
words = []
for i in range(n):
    words.append(input())

for i in range(n):
    word = words[i]
    abbr = ""
    l = len(word)
    if l > 10:
        abbr = abbr + word[0]
        abbr = abbr + str(l - 2)
        abbr = abbr + word[-1]
    else:
        abbr = word
    print(abbr)
