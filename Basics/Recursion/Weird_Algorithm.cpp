#include<bits/stdc++.h>

using namespace std;

void print(long long n) {
    if ( n == 1 ) {
        cout << n << " ";
        return;
    }

    cout << n << " ";
    if ( n % 2 == 0) {
        print(n/2);
    }
    else {
        print(n*3 + 1);
    }
    
}

int main() {
    long long n;
    cin >> n;

    print(n);

    return 0;
}