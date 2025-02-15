# -*- coding: utf-8 -*-
"""
Created on Thu Jan 16 12:22:08 2025
LECTURE 2.2
@author: NIRUPAM
"""

#Reading a csv file using pandas
import pandas as pd
path = "/home/tuhin/Documents/Syntax-Sanctum/Python/AI_ML/Basics/Data_Set/"
data = pd.read_csv(path+"employee.csv")
print(data)

#Reading a csv file and adding a coloumn "commission_yearly" with its calculated values based on the salary
data1 = data
data1 = data1.assign(commission_yearly=data1['salary']*0.2)
print(data1)
