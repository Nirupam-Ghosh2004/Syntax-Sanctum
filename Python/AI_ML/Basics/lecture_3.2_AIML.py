# -*- coding: utf-8 -*-
"""
Created on Thu Feb  6 06:01:08 2025

@author: NIRUPAM
"""
# Plot 2d graph using Matplotlib with points and dotted lines
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
xpoints= np.array([0,6])
ypoints= np.array([0,250])
plt.plot(xpoints,ypoints,linestyle='dotted',marker='o',color='red')
plt.title("Sample Plot")
plt.xlabel("X Axis")
plt.ylabel("Y Axis")
plt.show()