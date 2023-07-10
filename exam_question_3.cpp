#include<bits/stdc++.h>

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    queue<string> qu;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 0) {
            string b;
            cin >> b;
            qu.push(b);
        } else if (a == 1) {
            if (!qu.empty()) {
                cout << qu.front() << endl;
                qu.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}