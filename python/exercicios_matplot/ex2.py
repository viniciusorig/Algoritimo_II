#cordenadas polar
import matplotlib.pyplot as plt
import numpy as np

ax = plt.axes(projection='polar')#sintaxe base pra fazer um grafico polar
    
rads = np.arange(0, 10 * np.pi,0.001)  
for rad in rads: 
    r = rad 
    plt.polar(rad, r, 'b') 

for rad in rads: 
    r = rad+1
    plt.polar(rad, r, 'r') 

plt.show()