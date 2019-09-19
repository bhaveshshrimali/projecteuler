// brute force would not work
// use sieve of eratosthenes

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
bool is_prime(int n){
    
    if (n == 1){
        return false;
    }
    else if (n==2 or n == 3){
        return true;
    }
    for(int i=n/2; i >= 2; i--){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num = 1;
    int sum_prime = 0; 
    int req_primes = 2000000;
    while ( num <= req_primes)
    {
        if (is_prime(num)) {
            // cout << num << " ";
            sum_prime += num;
            num++;
            if (num==req_primes){
                break;
            }
        }
        else
        {
            num++;
        }
    }
    cout << "\nThe sum of the primes below " << req_primes << " is: " << sum_prime << endl;
    return 1;
}