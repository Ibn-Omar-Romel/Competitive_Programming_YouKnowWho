#include<bits/stdc++.h>
#include<numeric>

using namespace std;

string Compare(long long int a, long long int b, long long int c, long long int d) {

    if (b*log(a) > d*log(c))
        return "YES";

    return "NO";
    
}


int main() {
    
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << Compare(a,b,c,d) << endl;
}