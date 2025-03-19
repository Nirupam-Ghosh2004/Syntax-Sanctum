#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Mar 19 12:21:20 2025

@author: tuhin
"""

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
from sklearn.tree import DecisionTreeClassifier
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
decision_tree = DecisionTreeClassifier(max_depth=10)
decision_tree.fit(X_train,Y_train)
Y_pred=decision_tree.predict(X_test)
result=0
confusion_matrix = confusion_matrix(Y_test,Y_pred)
acc=accuracy_score(Y_test,Y_pred)
print("Accuracy using function is : ",acc*100)
print(confusion_matrix)