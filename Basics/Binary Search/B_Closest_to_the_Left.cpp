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

    int n, k;
    cin >> n >> k;
    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin  >> vec[i];
    }
    while(k--) {
        int target;
        cin >> target;

        auto it = lower_bound(vec.begin(), vec.end(), target);
        if (it != vec.end() and *it == target) {
            cout << it - vec.begin() + 1 << endl;
        }
        else {
            cout << prev(it) - vec.begin() + 1 << endl;
        }
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
