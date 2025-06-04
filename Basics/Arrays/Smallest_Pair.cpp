#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int>vec(n);
        for(auto& x : vec) {
            cin >> x;
        }

        long long int m = INT_MAX;
        for (int i = 0; i < n-1 ; i++) {
            for (int j = i+1; j < n; j++) {
                int value = vec[i] + vec[j] + j - i;
                if( value < m){
                    m = value;
                }
            }
        }
        cout << m << endl;

    }
}