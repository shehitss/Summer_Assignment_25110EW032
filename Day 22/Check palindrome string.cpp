#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    bool isPalindrome = true;
    
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    
    if (isPalindrome)
        cout << s << " is a Palindrome" << endl;
    else
        cout << s << " is not a Palindrome" << endl;
    
    return 0;
}