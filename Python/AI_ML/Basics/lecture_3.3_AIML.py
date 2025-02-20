# -*- coding: utf-8 -*-
"""
Created on Thu Jan 30 12:32:43 2025

@author: NIRUPAM
"""

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
#from sklearn import linear_model

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
plt.title("sepal vs petal")
plt.xlabel("Sepal")
plt.ylabel("Petal")
