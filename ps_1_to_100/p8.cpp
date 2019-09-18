// In a 1000-digit number, 
// find the adjacent 13 digits that have the maximum product
// print the product
#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std; 

// vector<int> get_digits(long long num){
//     long long num_temp = num;
//     int num_digits = 1; 
//     while (num/10 > 0)
//     {
//         num_digits++;
//         num /= 10;
//     }
//     cout << "The number of digits in the given number is: " << num_digits << endl; 
//     vector<int> digits(num_digits);
//     for (int i=0; i<num_digits; i++){
//         digits[i] = num_temp % 10; 
//         num_temp /= 10; 
//     }
//     return digits; 
// }

int get_max_product(vector<int> digits_of_num){
    
    // vector<int> product_digits(digits_of_num.size()-12);
    int max = 1;
    for (int i=0; i <= digits_of_num.size()-13; i++) {
        int prod = 1; 
        for (int j=i; j < i+13; j++){
            prod *= digits_of_num[j];
        }
        if (prod >= max){
            max = prod;
        }
        // product_digits[i] = prod; 


    }
    // int max = product_digits[0]; 
    // for (int k=1; k<product_digits.size(); k++){
    //     if (product_digits[k] > max){
    //         max = product_digits[k];
    //     }
    // }
    return max; 
}

int main() {
// you don't really need the number, just the digits; 
// it treats the number in the file as characters
     ifstream inpFile;
     vector<int> digits(1000); 
     char x;  
     inpFile.open("p8_data.txt");
     
     if (!inpFile){
         cerr << "Unable to open the requested file" << endl;
     }
     int sum = 0;
     while (inpFile >> x){
        digits[sum] = (int)x - '0';
        // cout << digits[sum] << " ";
        sum++;
     }
     inpFile.close();
    //  cout << "The program ended happily with sum = " << digits[0] << endl; 
     int max_product = get_max_product(digits);
     cout << max_product << endl;
     return 1;
    // cin >> num_a;  
    // vector<int> digits = get_digits(num_a);
}