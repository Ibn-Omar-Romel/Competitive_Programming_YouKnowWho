#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    int ans = INT_MAX, index = -1;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < ans) {
            ans = a[i];
            index = i+1;
        }
    }
    cout << ans << " " << index << endl;

}