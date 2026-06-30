#include <iostream>
using namespace std;
int main() {
    unsigned int num = 5;
    int bit_position = 1; 

    unsigned int mask = 1 << bit_position;

    num = num | mask;

    cout << "Result: " << num <<endl;
    return 0;
}