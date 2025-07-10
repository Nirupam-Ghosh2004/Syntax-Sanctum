#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jul  9 10:10:39 2025

@author: tuhin
"""

def show(l,k):
    freq={}
    for i in l:
        if i in freq:
            freq[i]+=1
        else:
            freq[i]=1
    print(freq)
    list=[]
    for i in freq:
        list.append((i,freq[i]))
    print(list)
    n = len(list)
    for i in range(n):
        for j in range(0, n-i-1):
            if list[j][1] < list[j+1][1]:
                list[j], list[j+1] = list[j+1], list[j]

    print(list)
    ans=[]
    for i in range(0, k):
        ans.append(list[i][0])
    print(ans)
l=[2,2,2,1,1,1,3,3,4,4]
k=3
show(l,k)