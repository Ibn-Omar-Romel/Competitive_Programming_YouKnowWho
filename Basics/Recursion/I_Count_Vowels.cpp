#include <iostream>
using namespace std;

int c = 0;

void countVowels(string s, int index) {
    
    if ( s.length() == index) {
        return;
    }

    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' ||
        s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U') {
        c++;
    }

    countVowels(s, index+1);
}

int main() {
    string s;
    getline(cin, s);
    

    countVowels(s, 0);

    cout << c << endl;

    return 0;
}
