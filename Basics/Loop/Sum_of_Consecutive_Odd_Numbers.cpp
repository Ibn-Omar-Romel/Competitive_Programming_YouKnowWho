#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        if ( a > b)
            swap(a,b);
        
        int sum = 0;
        for (int i = a+1; i < b; i++) {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
}