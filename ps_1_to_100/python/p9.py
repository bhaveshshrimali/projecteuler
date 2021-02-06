import numpy as np 

def get_pythagoerean_product(n):
    return np.array([n**2 + 1, n**2 - 1, 2*n])

i=2
while (i >=2):
    i += 1
    if 2*i*(i+1) == 1000:
        break

print(get_pythagoerean_product(i).prod())