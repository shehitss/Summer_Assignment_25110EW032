#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int count = 0;
    bool inWord = false;
    
    for (char c : s) {
        if (c != ' ' && !inWord) {
            count++;
            inWord = true;
        } else if (c == ' ') {
            inWord = false;
        }
    }
    
    cout << "Word count: " << count << endl;
    
    return 0;
}