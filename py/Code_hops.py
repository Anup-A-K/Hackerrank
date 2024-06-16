for i in range(int(input())):
    c, h = map(int, input().split())
    if c == 0 or h == 0:
        print(0)
    elif c == h:
        print(1)
    elif c < h:
        print(c)
    else:
        m = 0
        while c >= h:
            c -= h
            m += 1
        print(m + c)
        
# Each test case consists of a single line of input containing two space separated integers C and H denoting the number of stair the programmer wants to reach and the number of stairs the programmer can climb in one move.
