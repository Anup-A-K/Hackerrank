# for i in range(int(input())):
#     string = input()
#     # ipv 4
#     if string.count('.') == 3:
#         # check if all are numbers
#         if string.replace('.', '').isnumeric():
#             # check if all are in range
#             if all(0 <= int(i) <= 255 for i in string.split('.')):
#                 print('IPv4')
#             else:
#                 print('Neither')
#         else:
#             print('Neither')
#     # ipv 6
#     elif string.count(':') == 7:
#         # check if all are hex
#         if all(i.isalnum() for i in string.split(':')):
#             # check if all are in range
#             if all(0 <= int(i, 16) <= 65535 for i in string.split(':')):
#                 print('IPv6')
#             else:
#                 print('Neither')
#         else:
#             print('Neither')
#     else:
#         print('Neither')

import re
p1 = re.compile('^(((2[0-5][0-5])|(1[0-9][0-9])|([1-9][0-9])|(\d))\.){3}((2[0-5][0-5])|(1[0-9][0-9])|([1-9][0-9])|(\d))$')
p2 = re.compile('^([a-f0-9]{1,4}:){7}[a-f0-9]{4}$')
n = int(input())
for i in range(n):
    x = str(input())
    if(len(re.findall(p1, x)) != 0):
        print("IPv4")
    elif(len(re.findall(p2, x)) != 0):
        print("IPv6")
    else:
        print("Neither")
        