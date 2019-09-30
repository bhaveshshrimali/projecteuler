// first triangular number to have over 500 divisors 
// triangular number : 1, (1+2) = 3, (1+2+3) = 6, ...
#include <iostream>
#include <cmath>
#include <vector>

using namespace std; 

long num_sum(long num){
    long result_sum = num*(num + 1)/2 ;
    return result_sum;
}

bool is_desired_triangular(long triang_num, int num_divisors_required = 5){

    // * one way could be to check prime factors 
    // * p1^e1 x p2^e2 x ... 
    // * the total number of prime factors is p1, ... pn 
    // * the total number of factors is (1+e1) * (1+e2) * ...  

    // Do a prime sieve 
    int num_factors = 0; 
    int num_divisors = 0;
    while (triang_num % 2 == 0){
        num_factors++;
        triang_num /= 2;
    }
    num_divisors = 1+num_factors;

    for (long i=3; i <= sqrt(triang_num); i+=2){
        num_factors = 0;
        int j = sqrt(triang_num);
        if (j * j == triang_num  )
        {
            num_factors++;
        }
        while (triang_num % i == 0)
        {
            j *= j;
            num_factors++;
            triang_num /= i;            
        }

        num_divisors *= (1+num_factors);
    }
    if (num_divisors >= num_divisors_required){
        return true;
    }
    else {
        return false;
    }
}


int main(){
    long triangular_num = 1;
    long nums = 1; 
    bool num_is_triangular = false;
    while (not(num_is_triangular))
    {
        triangular_num = num_sum(nums); 
        num_is_triangular = is_desired_triangular(triangular_num); 
        nums++;
        if (nums == 7){
            cout << "For 5 nos " << num_sum(nums) << " and the boolean indicator is " << is_desired_triangular(num_sum(nums)) << endl;
        }

    }
    cout << triangular_num << endl;
    
    return 0; 
}