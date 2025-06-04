#include<bits/stdc++.h>
#include<numeric>

using namespace std;

int Compare(int n, int a, int b) {

    long long int sum = 0;
    for (int i = 1; i <= n; i++ ) {

        int extra = 0, value = i;

        while(value > 0) {
            extra += (value%10);
            value  /= 10;
        }
  
        if ( a <= extra and extra <= b) {
            sum += i;    
        }
    }

    return sum;
    
}


int main() {
    
    int n, a, b;
    cin >> n >> a >> b;

    cout << Compare(n,a,b) << endl;
}