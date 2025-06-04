#include<bits/stdc++.h>

using namespace std;

int main() {

    char ch;
    cin >> ch;

    if ( 'a' <= ch and ch <= 'z' ) {
        char c = toupper(ch);
        cout << c << endl;
    }
    else {
        char c = tolower(ch);
        cout << c << endl;
    } 
    
    return 0;
}