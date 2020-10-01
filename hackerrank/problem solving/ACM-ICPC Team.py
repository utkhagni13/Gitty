import math
import os
import random
import re
import sys

# Complete the acmTeam function below.
def acmTeam(n, m, topic):
    l = []
    for i in range(0,n-1):
        for j in range(i+1,n):
            c = m
            for k in range(0,m):
                if (topic[i][k] == '0' and topic[j][k] == '0'):
                    c -= 1
            l.append(c)
    mx = max(l)
    cnt = 0
    for i in l:
        if i == mx:
            cnt+=1
    return mx,cnt

if __name__ == '__main__':
    nm = input().split()
    n = int(nm[0])
    m = int(nm[1])

    topic = []
    for _ in range(n):
        topic_item = input()
        topic.append(topic_item)

    res1,res2 = acmTeam(n, m, topic)
    print(res1)
    print(res2)
