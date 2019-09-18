# // In a 1000-digit number, 
# // find the adjacent 13 digits that have the maximum product
# // print the product

import numpy as np 
import os 
from copy import deepcopy

def extract_digits(num):
    digits = []
    num = int(num)
    while (num/10 > 0):
        digits.append(deepcopy(num) % 10)
        num //= 10
    digits.reverse()
    return digits

def get_max_product(arr):
    max_prod = []
    # print(arr.size-13+)
    for i in range(arr.size - 12):
        max_prod.append(arr[i:i+13].prod())
    return max(max_prod)

with open('p8_data.txt') as rfil:
    lines = rfil.readlines()

nums = []
for line  in lines:
    nums.append(line.rstrip())

digits = []
for n in nums:
    digits.extend(extract_digits(n))

digits = np.array(digits)
print(get_max_product(digits))