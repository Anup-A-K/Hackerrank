#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'matchingStrings' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. STRING_ARRAY stringList
#  2. STRING_ARRAY queries
#

def matchingStrings(stringList, queries):
    # Write your code here
    # create a dictionary of the strings and their counts
    # iterate through the queries and return the count of the query
    # if the query is not in the dictionary, return 0
    # create a dictionary of the strings and their counts
    string_dict = {}
    for string in stringList:
        if string in string_dict:
            string_dict[string] += 1
        else:
            string_dict[string] = 1
    # iterate through the queries and return the count of the query
    # if the query is not in the dictionary, return 0
    counts = []
    for query in queries:
        if query in string_dict:
            counts.append(string_dict[query])
        else:
            counts.append(0)
    return counts

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    stringList_count = int(input().strip())

    stringList = []

    for _ in range(stringList_count):
        stringList_item = input()
        stringList.append(stringList_item)

    queries_count = int(input().strip())

    queries = []

    for _ in range(queries_count):
        queries_item = input()
        queries.append(queries_item)

    res = matchingStrings(stringList, queries)

    fptr.write('\n'.join(map(str, res)))
    fptr.write('\n')

    fptr.close()
