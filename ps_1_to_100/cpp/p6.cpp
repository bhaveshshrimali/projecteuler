// difference between the sum of squares and the square of sum
#include <iostream>
#include <cmath>
using namespace std;
long long sum_of_squares(double n) {
    if (n==1){
        return (long long)1;
    }
    else {
        return (long long)pow(n,2) + sum_of_squares(n-1);
    }
}

int main(){
    
    double ul = 100;
    double sq_sum = pow(ul * (ul+1)/2.,2);
    long long ans = (long long)sq_sum - sum_of_squares(ul);
    cout << ans;
}