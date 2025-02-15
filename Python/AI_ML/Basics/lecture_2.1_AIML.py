# -*- coding: utf-8 -*-
"""
Created on Thu Jan 16 11:38:05 2025
LECTURE 2.1
@author: NIRUPAM
"""

#Creating panda Series
import pandas as pd
st_dataset={'key_1':1,'key_2':2}
dtf=pd.Series(st_dataset)
print("\n",dtf)
print("\n")


#Creating panda data frame
dataset1={'name':['Nayan','Nirupam','Jisan'],'email':['palnayan30@gmail.com','tuhingh77@gmail.com','dadu69@gmail.com']}
dtf1=pd.DataFrame(dataset1)
# panda data frame are collection different panda series
print (dtf1)
print("\n")

#length of the dataframe
print(dtf1['name']) #printing the specific column data
dtf_length= len(dtf1)
print("Length : ",dtf_length)

#length of the dataframe using loop
len=0
for i in dtf1['name']:
    len=len +1
print("Length using loop : ",len,"\n")
    
#Assign own index in a dataframe
df1=pd.DataFrame(dataset1, index = ['Student 1','Student 2','Student 3'])
print(df1)
