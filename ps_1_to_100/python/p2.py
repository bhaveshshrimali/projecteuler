from numba import njit
import numpy as np


@njit
def fib(n):
    if n == 1:
        return 1
    elif n == 2:
        return 2
    else:
        return fib(n-1) + fib(n-2)


@njit
def main(input=4000000):
    i = 2
    sum_fib = 0
    fib_i = fib(i)
    while fib_i < input:
        if fib_i % 2 == 0:
            sum_fib += fib_i
        i += 1
        fib_i = fib(i)
    return sum_fib


print(main())
