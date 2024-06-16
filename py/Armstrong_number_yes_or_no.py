for i in range(int(input())):
    n = input()
    print("Yes" if int(n) == sum([int(x)**len(n) for x in n]) else "No")
    