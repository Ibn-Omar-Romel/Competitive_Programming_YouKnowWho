#include<bits/stdc++.h>
#include<numeric>

using namespace std;

long long int Calculate(int x, int n, int value) {

    if(value > n) {
        return 0;
    }

    return pow(x,value) + Calculate(x, n, value + 2);
    
}


int main() {
    
    int x, n;
    cin >> x >> n;

    cout << Calculate(x,n,2) << endl;
}