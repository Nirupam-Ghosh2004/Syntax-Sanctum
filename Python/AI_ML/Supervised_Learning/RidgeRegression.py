#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Mar  6 11:23:50 2025

@author: tuhin
----------------------------------------------------------------------------------------------------------------------
Notes :
----------------------------------------------------------------------------------------------------------------------
    OVER FITTING : 
    ------------
    2 types of accuracy:
        * training accuracy : 90%
        * testing accuracy : 68%
    if training accuracy is more then it is called low bias
    if the difference btw training and testing accuracy is more than 5 % then it is known as high variance
    
    UNDER FITTING:
    -------------
    2 types of accuracy:
        * training accuracy : 70%
        * testing accuracy : 68%
    if training accuracy is more then it is called high bias
    if the difference btw training and testing accuracy is less than 5 % then it is known as low variance
    
    
    TARGET : Our target is to achieve low bias and low variance
    ------
    Method :
    ------
        1) Ridge Regression (L2 regularization)
        2) Lasso Regression (L1 regularization)
    
    (Y(i) - Ypred(i))^2 + λ|slope|^2   <------------Ridge Regression
    
    (Y(i) - Ypred(i))^2 + λ|slope|     <------------Lasso Regression
    
----------------------------------------------------------------------------------------------------------------------
    
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

path="/home/tuhin/Documents/Syntax-Sanctum/Python/AI_ML/Basics/Data_Set/"
data=pd.read_csv(path+"BostonHousing.csv")
z=pd.DataFrame(data.corr().round(2))
x=data['rm']
y=data['medv']
x=pd.DataFrame(x)
y=pd.DataFrame(y)
x = np.reshape(x,(len(x),1))
X_train,X_test,Y_train,Y_test=train_test_split(x,y,test_size=0.1)
Y_test=np.reshape(Y_test,(-1,1))
reg = LinearRegression()
reg = reg.fit(X_train,Y_train)
Y_pred = reg.predict(X_test)
mean_sq_er = np.sqrt(mean_squared_error(Y_test, Y_pred))
r2_square = reg.score(Y_test,Y_pred)
RidgeRegressionClassifier = Ridge()
RidgeRegressionClassifier.fit(X_train,Y_train)
Y_pred_ridge = RidgeRegressionClassifier.predict(X_test)
mean_sq_er_ridge=np.sqrt(mean_squared_error(Y_test, Y_pred_ridge))
print("For Linear Regression : "+str(mean_sq_er))
print("For Ridge Regression  : "+str(mean_sq_er_ridge))