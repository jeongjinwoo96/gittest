#assignment
import matplotlib.pyplot as plt
import math
import numpy as np

def f(x,n):
    y=0
    for i in range(1,n+1):
        y += 2/np.pi*(1-(-1)**i)/i*np.sin(i*x)
    return y

t1=np.arange(-3.0 , 3.0, 0.01 )
plt.plot(t1,f(t1,3),label='n=3')
plt.plot(t1,f(t1,10),label='n=10')
plt.plot(t1,f(t1,30),label='n=30')
plt.plot(t1,f(t1,100),label='n=100')
plt.xlabel('x')
plt.ylabel('f(x)')
plt.show()
