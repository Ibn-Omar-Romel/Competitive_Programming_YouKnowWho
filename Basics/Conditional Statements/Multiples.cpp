#include<bits/stdc++.h>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;
    if ( a >= b and a % b == 0)
        cout << "Multiples" << endl;
    else if (a <= b and b % a == 0)
        cout << "Multiples" << endl;
    else   
        cout << "No Multiples" << endl;
    
    return 0;
}