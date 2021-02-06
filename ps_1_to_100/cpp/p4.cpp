// largest palindrome as a product of 2 `3`-digit numbers 
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool is_palindrome(int n1, int n2) {
    int prod = n1*n2; 
    // cout << "\n" << prod << "\n";
    int num_digits = 3;
    int divisor = 100; 
    for (int i=3; i<=6;i++){
        divisor *= 10;
        if (prod/divisor > 0){
            num_digits++;
        }
    }
    // cout << "The number of digits in the product of " << n1 << " and " << n2 << " is " << num_digits << "\n";
    // cout << "See for yourself " << prod << "\n";

    // Now check if the number is a palindrome 
    // separate the digits and store them in an array ? 
    // formula for obtaining the i-th digit 
    vector<int> digits(num_digits);
    int divisor_mod =(int)pow(10,num_digits-1);
    // cout << "The digits in the product of the numbers are: ";
    for (int j=num_digits-1; j >=0; j--){
        digits[num_digits-j-1] = prod / divisor_mod; 
        prod -= digits[num_digits-j-1]*divisor_mod;
        divisor_mod /= 10; 
        // cout << digits[num_digits-j-1] << " ";
    }
    // cout << "\n";
    bool check_palindrome = true; 
    for (int k=0; k < num_digits/2; k++) {

        check_palindrome = check_palindrome and (digits[k] == digits[num_digits-k-1]);
    }
    return check_palindrome;
}

int main() {

    // bool prod_num1_num2 = is_palindrome(num1, num2);
    bool temp_check = false;
    int prod = 10201;
    for (int num1=999; num1 >= 101; num1--){
        for (int num2=998; num2 >= 101; num2--){
            if (is_palindrome(num1, num2)){
                bool temp_check = true;
                prod = num1 * num2;
                break;
            }
        }
        if (temp_check){
            break;
        }
    }
    cout << "Largest Palindrome: " << prod << "\n";
}