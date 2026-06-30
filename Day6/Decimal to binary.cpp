#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) return "0";
    
    string binary = "";
    while (n > 0) {
        binary += std::to_string(n % 2);
        n = n / 2;                      
    }
    
    reverse(binary.begin(), binary.end());
    return binary;
}

int main() 
{
    int decimalNum;
    cout<<"Enter a Number:";
    cin>>decimalNum;
cout << "Binary: " << decimalToBinary(decimalNum) << "\n";
    return 0;
}