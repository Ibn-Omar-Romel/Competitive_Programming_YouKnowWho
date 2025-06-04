#include<bits/stdc++.h>

using namespace std;

long long arra[21] = {1};

int main() {

    long long product = 1;
    for ( long long i = 1 ; i <= 20; i++ ) {
        product *= i;
        arra[i] = product;
    }

    int t;
    cin >> t;

    while( t-- ) {
        int n;
        cin >> n;

        cout << arra[n] << endl;
    }
}