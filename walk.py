import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("c++ walk.cpp -o walk.x") #compila
a = os.system("./walk.x > walk.dat") #corre y guarda en .dat

plt.figure()
data = np.loadtxt("walk.dat")
plt.plot(data[:,0], data[:,1])
plt.axis('square')
plt.xlim([-25, 25])
plt.ylim([-25, 25])
plt.xlabel('X')
plt.ylabel('Y')
plt.savefig("walk.png")
