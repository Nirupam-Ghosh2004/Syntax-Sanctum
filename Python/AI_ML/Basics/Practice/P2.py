#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Feb 26 20:27:08 2025

@author: tuhin
"""

import numpy as np
import pandas as pd
a = np.array([1,2,3,4,5,7])
b = np.array([6,7,8,9,10,1])

#add 2 numpy array
#using + operator
sum = a + b
print("\nSum using + operator : ",sum);
#using add() function of numpy
sum1 = np.add(a,b)
print("Sum using add() function : ",sum1);
# Same way we have to perform substract(), multiply(), divide()

#exponential
#using ** operator
exp = a ** 2
print("Exponential using ** operator :  ",exp)
#using power() function
exp1 = np.power(b,2)
print("Exponenetial using power() function : ",exp1)


#mean
a_mean = np.mean(a);
print("Mean of a : ",a_mean)

#median
a_median = np.median(a)
print("Median of a : ",a_median)

#max
a_max = np.max(a)
print("Max of a : ",a_max)

#min
a_min = np.min(a)
print("Min of a : ",a_min)

#Reshape a numpy array 
reshape = np.reshape(a,(2,3))
print("Reshaped array : \n",reshape)

#save and load txt file using numpy
path = "/home/tuhin/Documents/Syntax-Sanctum/Python/AI_ML/Basics/Data_Set/"
np.savetxt(path+"data.txt",a)
x = np.loadtxt(path+"data.txt")
print("Loaded txt file : ",x)