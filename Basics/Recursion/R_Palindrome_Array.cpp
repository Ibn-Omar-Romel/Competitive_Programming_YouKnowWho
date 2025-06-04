#include<bits/stdc++.h>

using namespace std;

bool palindrome(vector<int>* vec, int n ) {

    if (n <= 1) {
        return true;
    }
    if (vec[0] != vec[n-1]) {
        return false;
    }
    return palindrome(vec+1, n-2);
}

int main() {
    int n;
    cin >> n;

    vector<int>vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    if (palindrome(&vec, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

    