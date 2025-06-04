#include <iostream>
using namespace std;

int fibonacci(int n, int a = 0, int b = 1, int cnt = 2) {
    if (cnt == n) 
        return b;
    
    return fibonacci(n, b, a + b, cnt + 1);
}

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 0 << endl;
    } else if (n == 2) {
        cout << 1 << endl;
    } else {
        cout << fibonacci(n) << endl;
    }

    return 0;
}
