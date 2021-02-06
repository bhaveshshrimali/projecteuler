# print sum of all primes below 200,000,0
# have to use eratosthenes sieve for extracting 
# primes
# Implementation based on `python3` `set()` function
# is enormously faster. It uses hash-table for lookup
# which is highly efficient. 


import numpy as np 
from copy import deepcopy

def is_prime(n, prime_list):
    if n==2 or n==3:
        return True
    for i in prime_list:
        if i != 0:
            if (n % i ==0):
                return False
    return True


def main_program(n):
    multiples = set()
    for i in range(2, n+1):
        if i not in multiples:
            yield i
            multiples.update(range(i*i, n+1, i))
 
# print(list(eratosthenes2(100)))

print(sum(main_program(2000000)))