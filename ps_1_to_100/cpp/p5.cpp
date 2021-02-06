// smallest multiple
#include <iostream> 
#include <cmath>
using namespace std;
long long factorial(int n){
    if (n==1){
        long long val = 1;
        return val;
    }
    else {
        long long val = n * factorial(n-1);
        return val;
    }
}

int main(){
    
    int upper_limit;
    cin >> upper_limit; 
    int j=upper_limit;
    while (1) {
        j += 1;
        bool is_divide = true;
        for (int k=2; k <= upper_limit; k++){
            is_divide = is_divide && (j % k == 0);
        }
        if (is_divide) {
            cout << j; 
            break;
        }
    }
}