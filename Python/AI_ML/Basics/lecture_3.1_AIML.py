# -*- coding: utf-8 -*-
"""
Created on Thu Jan 30 11:33:03 2025

@author: NIRUPAM
"""

#Reading Iris_Dataset.csv file using pandas within a dataframe

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


path = "/home/tuhin/Documents/Syntax-Sanctum/Python/AI_ML/Basics/Data_Set/"
data = pd.read_csv(path+"Iris_Dataset.csv")
print(data)

data1 = data
data1 = data1.assign(Total_Length=data1['sepal_length']+data1['petal_length'])
data1 = data1.assign(Total_Width=data1['sepal_width']+data1['petal_width'])
print(data1)

#plotting the data points
x1=data1['sepal_length']
y1=data1['petal_length']
x2=data1['sepal_width']
y2=data1['petal_width']
plt.scatter(x1, y1, color='red',marker='.')
plt.scatter(x2, y2, color='blue',marker='.')

#removing one column by its name
#axis 1 denotes the columns not the rows
data2 = data1.drop('species',axis=1)
print(data2)

#reading employee.csv
emp=pd.read_csv(path+"employee.csv")
print(emp)

#removing multiple column using index position
emp1=emp
emp1.drop(emp1.columns[[0,1,3]],axis=1,inplace=True)
print(emp1)

#removing columns using ilocation
emp2=emp
emp2.drop(emp2.iloc[:,0:3],axis=1,inplace=True)
print(emp2)


