#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int odd = 0, even = 0, positive = 0, negative = 0;

    for (int i = 0; i < n ; i++) {
        
        int a;
        cin >> a;
        if (a % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }

        if ( a < 0)
            negative++;
        if ( a > 0)
            positive++;

    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    return 0;
}