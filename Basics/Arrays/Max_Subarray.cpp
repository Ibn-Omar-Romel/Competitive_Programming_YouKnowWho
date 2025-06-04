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

        for (int i = 0; i < n ; i++) {
            int value = INT_MIN;
            for (int j = i; j < n; j++) {
                
                value = max(value,vec[j]);
                cout << value << " ";
            }
        }
        cout <<  endl;

    }
}