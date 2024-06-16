str = input()
str1 = ''
for i in str:
    if i.islower():
        str1 += i.upper()
    elif i.isupper():
        str1 += i.lower()
    else:
        str1 += i
print(str + " after changing " + str1)