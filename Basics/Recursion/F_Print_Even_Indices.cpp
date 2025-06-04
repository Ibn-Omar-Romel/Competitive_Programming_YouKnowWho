#include<bits/stdc++.h>

using namespace std;

void Print(vector<int>vec, int n , int index) {

    if(n == index) 
        return;
    
    Print(vec, n, index+1);
    
    if (index % 2 == 0) {
        cout << vec[index] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    vector<int>vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    Print(vec, n, 0);

    return 0;
}