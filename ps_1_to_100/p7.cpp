// print the 10001-th prime
#include <iostream>
#include <cmath>
using namespace std; 

bool is_prime(int n) {
    int n1 = n;
    for (int i=2; i <= sqrt(n1); i++) {
        while (n % i == 0) {
            n /= i;
        }
    }
    if (n > 2){
        return true;
    }
    return false;
}

int main(){

    cout << is_prime(20) << "\n";

    int num_prime; 
    cin >> num_prime; 

    int j=2;
    int np = 1;  
    while (np <= num_prime){
        j++;
        if (is_prime(j)){
            np++;
        }
    }
    cout << "The " << num_prime << " -th prime is " << j << "\n";
    return 1;
}