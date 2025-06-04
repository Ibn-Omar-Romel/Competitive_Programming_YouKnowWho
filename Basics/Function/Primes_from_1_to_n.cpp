#include<bits/stdc++.h>

using namespace std;

int N = 1e7 + 10;
vector<bool> isPrime(N+1, true);


int main() {

    int n;
    cin >> n;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i*i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }


    for (int i = 2 ; i <= n ; i++ ) {
        if (isPrime[i])
            cout << i << " ";
    }
    cout << endl;
}