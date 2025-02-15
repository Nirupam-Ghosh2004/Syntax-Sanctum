# -*- coding: utf-8 -*-
"""
Created on Thu Feb  6 06:25:12 2025

@author: NIRUPAM
"""

#Read HeadBrain.csv and print it
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn import linear_model

import pandas as pd
path = "/home/tuhin/Documents/Syntax-Sanctum/Python/AI_ML/Basics/Data_Set/"
data = pd.read_csv(path+"headbrain.csv")
#print(data.head())
x=data['Head Size(cm^3)'].values
y=data['Brain Weight(grams)'].values
mean_x=np.mean(x)
mean_y=np.mean(y)
numer=0
denom=0
for i in range(len(x)):
    numer=numer+((x[i]-mean_x)*(y[i]-mean_y))
    denom=denom+((x[i]-mean_x)**2)
m=numer/denom
c=mean_y-(m*mean_x)


max_x=np.max(x)+100
min_x=np.min(x)-100
x1=np.linspace(min_x,max_x,100)
y1=(m*x1)+c

value=int(input("Insert the head size in cm^3 : "))
predict=(m*value)+c
print("The predicted Brain weight in grams is : ",predict)

plt.scatter(x,y,color='black',marker='.', label='Data Points')
plt.plot(x1,y1,color='red', label='Best Fit Line')
plt.xlabel("Head Size(cm^3)")
plt.ylabel("Brain Weight(grams)")