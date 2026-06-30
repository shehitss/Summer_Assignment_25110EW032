#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int vowels = 0, consonants = 0;
    
    for (char c : s) {
        c = tolower(c);
        if (c >= 'a' && c <= 'z') {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else
                consonants++;
        }
    }
    
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    
    return 0;
}
