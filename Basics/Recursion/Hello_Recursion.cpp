#include<bits/stdc++.h>

using namespace std;

int sum = 0;

void calculate(vector<int>vec, int index, int n) {

    if (index == n)
        return;
    
    sum += vec[index];
    calculate(vec, index + 1, n);
}

int main() {

    int t;
    cin >> t;
    
    int c = 0;
    while(t--) {

        c++;

        int n;
        cin >> n;

        vector<int>vec(n);
        for (int i = 0 ; i < n ; i++) {
            cin >> vec[i];
        }
        calculate(vec, 0, n);
        cout << "Case " << c << ": " << sum << endl;
        sum = 0;
    }
    return 0;
}