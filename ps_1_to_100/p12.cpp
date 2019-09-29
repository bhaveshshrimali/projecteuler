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

bool is_desired_triangular(long triang_num){

    // * one way could be to check prime factors 
    // * then calculate total prime factors
    // * then calculate product till the the second last prime factor 
    // * this would potentially be shorter than running brute force n/2
    // * every time 

    int num_facs = 2; // 1 and `triang_num` are defacto
    bool has_num_div = false;
    for (long i=2; i <= triang_num/2; i++){
        if (triang_num % i==0){
            num_facs++;
            // cout << "i,  " << endl;
        }
        if (num_facs > 500){
            has_num_div=true;
        }
    }
    return has_num_div;
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

    }
    
    return 0; 
}