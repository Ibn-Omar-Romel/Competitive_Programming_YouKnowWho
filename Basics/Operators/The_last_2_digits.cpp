#include<bits/stdc++.h>

using namespace std;

int main() {

    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long int result = (a % 100) * (b % 100) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;

    if ( result < 10 ) {
        cout << 0 << result;
    }
    else {
        cout << result << endl;
    }
    return 0;
}