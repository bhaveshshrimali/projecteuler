import numpy as np 

def max_product(grid_data):
    """ returns the max product along any
        of the directions in the grid 
        (horizontal, vertical, diagonal)
        """
    num_digits = 4
    max_prod_vertical = 1
    max_prod_horizontal = 1
    max_prod_diagonal = 1
    # vertical and horizontal
    for i in range(grid_data.shape[0]-num_digits):
        column_prod = max(max(np.prod(grid_data[i:i+num_digits],axis=0)),max_prod_vertical)
        row_prod = max(max(np.prod(grid_data.T[i:i+num_digits],axis=0)),max_prod_horizontal)
    
    # diagonal
    for k_diag in range()

    




arr = np.loadtxt('p11_data.txt',delimiter=' ')