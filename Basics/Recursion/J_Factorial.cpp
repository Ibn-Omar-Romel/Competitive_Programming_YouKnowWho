#include<bits/stdc++.h>

using namespace std;

long long int print(int n) {
    
    if (n == 1)
        return 1;
    
    return n * print(n-1);
}

int main() {
    int n;
    cin >> n;

    cout << print(n) << endl;
    return 0;
}