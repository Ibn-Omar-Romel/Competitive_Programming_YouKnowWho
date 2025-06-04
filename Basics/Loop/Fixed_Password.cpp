#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int pass = 1999;

    while(true) {
        int a;
        cin >> a;

        if (pass == a) {
            cout << "Correct" << endl;
            break;
        }
        else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}