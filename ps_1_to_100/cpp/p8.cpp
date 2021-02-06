// In a 1000-digit number, 
// find the adjacent 13 digits that have the maximum product
// print the product
#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std; 

long long get_max_product(vector<int> digits_of_num){
    
    // vector<int> product_digits(digits_of_num.size()-12);
    long long max_product = 1;
    int num_digits = 13; 
    // cout << digits_of_num.size() << endl;
    for (int i=0; i <= digits_of_num.size()-num_digits; i++) {
        long long prod = 1; 
        for (int j=i; j < i+num_digits; j++){
            prod *= digits_of_num[j];
        // cout << j << endl;
        }
        if (prod > max_product){
            max_product = prod;
        }
    }
    return max_product; 
}

int main() {
// you don't really need the number, just the digits; 
// it treats the number in the file as characters
     ifstream inpFile;
     int num_digits = 1000;
     vector<int> digits(num_digits); 
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
     cout << "\nThe program ended happily with ending index = " << sum << endl; 
     long long max_product;
     max_product = get_max_product(digits);
     cout << max_product << endl;
     return 1;

}