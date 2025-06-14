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

    int MAX = 1e5;
    vector<int> vec(MAX, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec[x]++;
    }

    int total = 0;
    for (int i = 1; i < MAX; i++) {
        if (vec[i] == 0) {
            continue;
        }   
        //cout << i << " " << vec[i] << endl;
        if (vec[i] != i) {
            if (vec[i] > i) {
                total += (vec[i] - i);
            } else {
                total += vec[i];
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
