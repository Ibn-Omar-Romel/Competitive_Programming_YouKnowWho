#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int arra[3];
    cin >> arra[0] >> arra[1] >> arra[2];
    int a = arra[0];
    int b = arra[1];
    int c = arra[2];

    sort(arra, arra+3);
    for ( int i = 0; i < 3 ; i++ ) {
        cout << arra[i] << endl;
    }
    cout << endl;
    cout << a << endl << b << endl << c << endl;
}