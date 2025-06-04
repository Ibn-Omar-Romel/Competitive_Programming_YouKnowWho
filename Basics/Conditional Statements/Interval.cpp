#include<bits/stdc++.h>

using namespace std;

int main() {
    float a;
    cin >> a;

    if ( 0 <= a and a <= 25) {
        cout << "Interval [0,25]" << endl;
    }
    else if ( 25 < a and a <= 50 ) {
        cout << "Interval (25,50]" << endl;
    }
    else if ( 50 < a and a <= 75 ) {
        cout << "Interval (50,75]" << endl;
    }
    else if ( 70 < a and a <= 100 ){
        cout << "Interval (75,100]" << endl;
    }
    else {
        cout << "Out of Intervals" << endl;
    }
    return 0;

}