#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int>vec(n);
    for (auto& x : vec) {
        cin >> x;
    }
    
    int i = 0, j = n-1;
    int flag = 0;

    while( i <= j) {
        if (vec[i] != vec[j]) {
            flag = 1;
            break;
        }
        i++, j--;
    }
    
    if (flag == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}