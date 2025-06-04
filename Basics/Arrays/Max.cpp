#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    int ans = INT_MIN;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans = max(ans, a[i]);
    }
    cout << ans << endl;

}