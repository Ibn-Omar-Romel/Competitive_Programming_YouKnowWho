#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    char ch, chh;

    cin >> a >> ch >> b >> chh >> c;

    int value = 0;
    if ( ch == '+')
        value = a + b;
    else if ( ch == '-')
        value = a - b;
    else    
        value = a * b;

    if ( value == c)    
        cout << "Yes" << endl;
    else    
        cout << value << endl;

    return 0;
}