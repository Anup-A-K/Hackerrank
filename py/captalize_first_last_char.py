str = input()
str1 = ''
for word in str.split():
    str1 += word[:-1].capitalize() + word[-1].capitalize() + ' '
print(str1)