#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if (fabs(a) < 1e-9 && fabs(b) < 1e-9)
        cout << "Origem";
    else if (fabs(a) < 1e-9)
        cout << "Eixo Y";
    else if (fabs(b) < 1e-9)
        cout << "Eixo X";
    else if (a > 0 && b > 0)
        cout << "Q1";
    else if (a > 0 && b < 0)
        cout << "Q4";
    else if (a < 0 && b < 0)
        cout << "Q3";
    else
        cout << "Q2";

    return 0;
}
