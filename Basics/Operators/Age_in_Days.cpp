#include<bits/stdc++.h>

using namespace std;

int main() {

    int a;
    cin >> a;

    int year = a / 365;
    int month = (a % 365) / 30;
    int day = (a % 365) % 30;

    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;
}