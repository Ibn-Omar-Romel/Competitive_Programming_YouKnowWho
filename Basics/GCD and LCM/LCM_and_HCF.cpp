#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


long long my_GCD(long a, long b) {
    if (a == 0) 
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b) {
        return my_GCD(a - b, b);
    }

    return my_GCD(a, b - a);
}


void solve() {

    long long a, b;
    cin >> a >> b;

    long long value2 = my_GCD(a, b);
    long long value1 = (a*b) / value2;

    cout << value1 << " " << value2 << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        solve();
    }
    return 0;
}
