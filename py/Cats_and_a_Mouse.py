# for i in range(int(input())):
#     x, y, z = map(int, input().split())
#     a = abs(x - z)
#     b = abs(y - z)
#     if a > b:
#         print('Cat B')
#     elif a < b:
#         print('Cat A')
#     else:
#         print('Mouse C')

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the catAndMouse function below.
def catAndMouse(x, y, z):
    a = abs(x - z)
    b = abs(y - z)
    if a > b:
        return 'Cat B'
    elif a < b:
        return 'Cat A'
    else:
        return 'Mouse C'
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        xyz = input().split()

        x = int(xyz[0])

        y = int(xyz[1])

        z = int(xyz[2])

        result = catAndMouse(x, y, z)

        fptr.write(result + '\n')

    fptr.close()
