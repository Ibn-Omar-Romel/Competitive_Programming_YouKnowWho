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

    int n;
    cin >> n;

    vector<int>vec(n);
    int min_value = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        min_value = min(min_value, vec[i]);
    }

    if (n == 1) {
        cout << vec[0] << endl;
        return;
    }

    int common_divisor = 0;
    
    for (int i = 1; i <= min_value; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (vec[j] % i == 0) {
                count++;
            }
        }
        if (count == n) {
            common_divisor++;
        }
    }
    cout << common_divisor << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
