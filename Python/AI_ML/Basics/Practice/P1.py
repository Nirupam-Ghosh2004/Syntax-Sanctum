import pandas as pd
import numpy as np

# Creating pandas series
# First Method
data1 = {"Key1":12,"key2":23}
dts = pd.Series(data1);
print("\n",dts)
# Second Method
dts1 = pd.Series([62,93],index=["A","B"])
print("\n",dts1)

# Creating pandas dataframe
data2 = {"Roll":[12,24,36],"Name":["Jisan","Nirupam","Nayan"]}
dtf = pd.DataFrame(data2)
print("\n",dtf)
# adding custom index
dtf2 = pd.DataFrame(data2,index=["a","b","c"])
print("\n",dtf2)

# finding length
#using function
len = len(dtf)
print("\nThe length of the data frame : ",len)
#using for loop
l = 0
for i in dtf["Roll"]:
    l = l + 1
print("\nThe length of the dataframe : ", l)

# printing specific column in dataframe
print("\n",dtf["Name"])