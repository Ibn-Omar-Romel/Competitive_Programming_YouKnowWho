#include<bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    char ch;
    cin >> a >> ch >> b;

    if ( a > b ) {
        if (ch == '>')
            cout << "Right" << endl;
        else    
            cout << "Wrong" << endl;
    }
    else if ( a < b) {
        if (ch == '<')
            cout << "Right" << endl;
        else    
            cout << "Wrong" << endl;
    }
    else {
        if (ch == '=')
            cout << "Right" << endl;
        else    
            cout << "Wrong" << endl;
    }
    return 0;
}