#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && st.top() != c) {
                st.pop();
            } else {
                st.push(c);
            }
        }
        if (st.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
