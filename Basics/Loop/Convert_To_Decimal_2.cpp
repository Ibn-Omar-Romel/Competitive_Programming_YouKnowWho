#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        long long int n;
        cin >> n;

        //Approach 1:
        // string bina = bitset<32>(n).to_string();
        // bina = bina.substr(bina.find('1'));

        // int value = 0;
        // for (auto x : bina) {
        //     if ( x == '1')
        //         value++;
        // }
        // cout << pow(2,value) - 1 << endl;


        // Approach 2:
        long long int value = __builtin_popcountll(n);
        cout << (1 << value) - 1 << endl;


        //Approach 3:
        // int value = 0;
        // while( n != 0) {

        //     int rem = n % 2;
        //     n /= 2;

        //     if (rem == 1) {
        //         value++;
        //     }
        // }

        // cout << pow(2,value) - 1 << endl;
    }
}