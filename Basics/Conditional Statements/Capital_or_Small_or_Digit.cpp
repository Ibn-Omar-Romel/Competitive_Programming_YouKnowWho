#include<bits/stdc++.h>

using namespace std;

int main() {

    char ch;
    cin >> ch;

    if ( 'a' <= ch and ch <= 'z' ) {
        cout << "ALPHA\nIS SMALL" << endl;
    }
    else if ('A' <= ch and ch <= 'Z')
        cout << "ALPHA\nIS CAPITAL" << endl;
    else 
        cout << "IS DIGIT" << endl;  
    
    return 0;
}