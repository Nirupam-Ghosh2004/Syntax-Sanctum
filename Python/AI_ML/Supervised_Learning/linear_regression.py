# date- 13-2-2025

import pandas as pd
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
from sklearn.model_selection import train_test_split
path= "/home/tuhin/Documents/Syntax-Sanctum/Python/AI_ML/Basics/Data_Set/"
dataset= pd.read_csv(path+"headbrain.csv")
x = dataset['Head Size(cm^3)'].values
y = dataset['Brain Weight(grams)'].values
#print(x)
x=x.reshape(len(x),1)
x_train, x_test, y_train, y_test= train_test_split(x,y,test_size=0.1)
reg= LinearRegression();
reg= reg.fit(x_train, y_train)

y_pred= reg.predict(x_test)
print(mean_squared_error(y_test, y_pred))