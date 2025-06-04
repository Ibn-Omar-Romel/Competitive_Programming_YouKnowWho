#include<bits/stdc++.h>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    vector<int>vec;
    
    for (int i = a; i <= b; i++ ) {

        int value = i;
        int flag = 1;

        while( value != 0 ) {
            int rem = value % 10;
            if ( rem == 4 or rem == 7 ) {
                value /= 10;
                continue;
            }
            else {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            vec.push_back(i);
        }
    }
    if ( vec.size() == 0) {
        cout << -1 << endl;
    }
    else {
        for (int i = 0 ; i < vec.size(); i++ ) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}