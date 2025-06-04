#include<bits/stdc++.h>
#include<numeric>

using namespace std;


int main() {
    
    int n;
    cin >> n;

    if (n%2 != 0) {

        string b = bitset<32>(n).to_string();
        b = b.substr(b.find('1'));

        string a = b;
        reverse(b.begin(), b.end());

        if (a == b)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}