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

void solve() {

    long long n, k;
    cin >> n >> k;

    vector<long long>vec;
    int end = sqrt(n);
    for (int i = 1; i <= end; i++) {
        if (n % i == 0) {
            vec.push_back(i);
            if (i != n / i) { 
                vec.push_back(n / i);
            }
        }
    }
    sort(vec.begin(), vec.end());
    if (k <= vec.size()) {
        cout << vec[k - 1] << endl;
        return;
    }
    cout << -1 << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
