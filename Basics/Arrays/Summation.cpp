#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    long long int sum = 0;
    while (n--) {
        int a;
        cin >> a;
        sum += a;
    }
    cout << abs(sum) << endl;
}