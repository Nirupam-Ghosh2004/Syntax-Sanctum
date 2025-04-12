#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Mar 19 11:30:24 2025

@author: tuhin
"""

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix
from sklearn.metrics import accuracy_score
from sklearn.metrics import precision_score
from sklearn.metrics import recall_score
from sklearn.metrics import f1_score
from sklearn.linear_model import LogisticRegression
from sklearn import preprocessing
from sklearn import svm
from sklearn.preprocessing import LabelEncoder
path="/home/tuhin/Documents/Syntax-Sanctum/Python/AI_ML/Basics/Data_Set/"
data=pd.read_csv(path+"cars_clus.csv")

X = data.drop(['manufact', 'model'], axis=1)

Y = data['type']

X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.4, random_state=15)

svm_model = svm.SVC(kernel='linear', C=1.0)
svm_model.fit(X_train, Y_train)

Y_pred = svm_model.predict(X_test)

acc = accuracy_score(Y_test, Y_pred)
conf_matrix = confusion_matrix(Y_test, Y_pred)
precision = precision_score(Y_test, Y_pred, average='weighted', zero_division=0)
recall = recall_score(Y_test, Y_pred, average='weighted')
f1 = f1_score(Y_test, Y_pred, average='weighted')

print("Accuracy: {:.2f}%".format(acc * 100))
print("Precision:", precision)
print("Recall:", recall)
print("F1 Score:", f1)
print("Confusion Matrix:\n", conf_matrix)