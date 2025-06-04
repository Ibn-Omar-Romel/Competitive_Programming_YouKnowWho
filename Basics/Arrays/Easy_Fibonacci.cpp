#include<bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);

    for(int i = 2; i <= n; i++) {
        vec.push_back(vec[i-1] + vec[i-2]);
    }
    
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}