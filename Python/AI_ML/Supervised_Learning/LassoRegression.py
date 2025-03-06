#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Mar  6 15:31:56 2025

@author: tuhin
"""

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix
from sklearn.metrics import accuracy_score
from sklearn.metrics import precision_score
from sklearn.metrics import mean_squared_error
from sklearn.metrics import f1_score
from sklearn.linear_model import Ridge,LinearRegression

from sklearn import preprocessing
from sklearn.preprocessing import LabelEncoder

path="/home/tuhin/Documents/Syntax-Sanctum/Python/AI_ML/Basics/Data_Set/"
data=pd.read_csv(path+"Iris_Dataset.csv")

X=data.drop("species",axis=1)
data1=pd.read_csv(path+"Iris_Dataset.csv")
data1.drop(data1.iloc[:,0:4],axis=1, inplace=True)
Y=data1

le = LabelEncoder()
labels = le.fit_transform(Y)
print(Y)
print(labels)
X_train,X_test,Y_train,Y_test=train_test_split(X,labels,test_size=0.4,random_state=15)