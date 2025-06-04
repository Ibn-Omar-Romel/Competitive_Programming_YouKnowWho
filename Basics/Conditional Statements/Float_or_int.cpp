#include<bits/stdc++.h>

using namespace std;

int main() {
    
    float a;
    cin >> a;

    int n = (int)a;

    if (n == a)
        cout << "int " << n << endl;
    else {
        // cout << "float " << n << " ";
        // cout << fixed << a - (float)n << endl;
        cout << "float " << n << " " << fixed << setprecision(3) << a - (float)n << endl;
    }

        
    
    return 0;
}