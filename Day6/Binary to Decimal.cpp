#include <iostream>
#include <string>
using namespace std;

int main() {
    string binaryStr;
    cout<<"Enter a binary Number:";
    cin>>binaryStr;

    int decimalVal =stoi(binaryStr, nullptr, 2);
    
    cout << "Decimal: " << decimalVal << std::endl; 
    return 0;
}
