#include<bits/stdc++.h>

using namespace std;

int main() {

    while(true) {
        int a, b;
        cin >> a >> b;

        if ( a <= 0 or b <= 0)
            break;
        if ( a < b) 
            swap(a,b);

        int sum = 0;
        for (int i = b; i <= a ; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
}