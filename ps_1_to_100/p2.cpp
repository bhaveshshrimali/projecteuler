#include <iostream>
#include <cmath>
using namespace std;

int fib(int n){
    if (n==1){
        return 1;
    } 
    else if (n==2){
        return 2;
    }
    else {
        int val = fib(n-1) + fib(n-2);
        return val;
    }

}

int main(){
    int sum=0;
    int i=1;
    while (fib(i) <= 4000000) {

        if ( fib(i)%2 == 0){
            sum += fib(i);
        }
        i++;

    }
    cout << "The sum of the even valued terms of fibonacci is " << sum << "\n";
    // cout << "The fifth term in the fibonacci series is " << fib(5) << "\n";

}