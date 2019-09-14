#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sum=0; 
    for (int i=3; i<1000; i++){
        if (i%3==0 or i%5==0){
            sum += i;
        }
    }
    cout << "Sum of all the multiples of 3 or 5: " << sum << "\n"; 

}
