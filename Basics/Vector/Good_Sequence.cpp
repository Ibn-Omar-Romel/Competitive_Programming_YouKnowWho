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
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }

    int total = 0;
    for (auto it : m) {
        if (it.first != it.second) {
            if (it.first < it.second) {
                total += (it.second -it.first);
            } else {
                total += it.second;
            }
        }
    }
    cout << total << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
