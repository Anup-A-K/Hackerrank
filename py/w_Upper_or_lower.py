s = str(input())
if sum(1 for c in s if c.isupper()) > sum(1 for c in s if c.islower()):
    print(s.upper())
elif sum(1 for c in s if c.isupper()) < sum(1 for c in s if c.islower()):
    print(s.lower())
else:
    print(s.lower())