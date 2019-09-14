#include <iostream>
#include <cmath>
using namespace std;
// find the largest prime factor of a given nber 
long long larg_prime(long long n){
    // start with a 2 
    long long largest_prime = 2;
    while (n % 2 == 0) {
        largest_prime = 2; 
        n /= 2;
    }
    for (long long i=3; i <= sqrt(n); i+=2) {
        while (n % i == 0) {
            largest_prime = i; // not very efficient as it checks composite odds too!
            n /= i; 
        }
    }

    // At this point, the only corner case that remains is that 
    // `n` is itself a prime, 
    // how to check if `n` itself is prime ?

    if (n > 2) {
        largest_prime = n;
    }
    return largest_prime;
}

int main() {
    // long long num=441;
    long long num = 600851475143;  
    long long result = larg_prime(num); 
    cout << "The largest prime factor of " << num << " is: " << result << "\n";

}