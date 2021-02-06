import numpy as np
import math
from numba import njit


def main(input=1000):
    multiple_3_5 = []
    for num in range(1, input):
        if num % 3 == 0 or num % 5 == 0:
            multiple_3_5.append(np.int64(num))
    return sum(multiple_3_5)


def main_numpy(input=1000):
    return np.sum([i for i in range(1, input) if (i % 3 == 0 or i % 5 == 0)])


@njit
def main_numba(input=1000):
    sum = 0.0
    for i in range(input):
        if (i % 3 == 0) or (i % 5 == 0):
            sum += i
    return sum
