#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int value;
    cin >> value;

    int ans = -1;
    for (int i = 0; i < n; i++ ) {
        if (a[i] == value) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}