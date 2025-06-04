#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int space = n-1, star = 1;
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < space; j++) {
            cout << " ";
        }
        space--;
        for(int j = 0; j < star ; j++) {
            cout << "*";
        }
        star += 2;
        cout << endl;
    }

    star = (n * 2) - 1;
    space = 0;
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < space; j++) {
            cout << " ";
        }
        space++;
        for(int j = 0; j < star ; j++) {
            cout << "*";
        }
        star -= 2;
        cout << endl;
    }
}