// pythagorean triplet whose sum is 1000
// note that a general pythagorean triplet is of the
// form : n^2 + 1, n^2 - 1, 2*n --- wrong 
// a more general representation is possible -- see mathblog
#include <iostream>
#include <cmath>
#include <vector>
using namespace std; 

int main(){
    int s = 1000;
    bool found = false;
    vector<int> triplet(3);
    for (int a = 1; a < s/3 ; a++){
        for (int b=a+1; b < s/2; b++){
            int c = s-a-b;
            if (a*a + b*b == c*c){
                found = true;
                triplet = {a,b,c};
                break;
            }
        }
        if (found){
            break;
        }
    }
    cout << "The pythagorean triplet: " << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << endl;
    cout << "And the product is " << triplet[0]*triplet[1]*triplet[2]<<endl;
}