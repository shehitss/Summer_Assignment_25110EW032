#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    for (char &c : s) {
        if (c >= 'a' && c <= 'z')
            c = c - 32;
    }
    
    cout << s << endl;
    
    return 0;
}