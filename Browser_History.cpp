#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    list<string> mylist;
    string ad;
    while (true) {
        cin >> ad;
        if (ad == "end") {
            break;
        }
        mylist.push_back(ad);
    }
    
    int count;
    cin >> count;
    string dir, val;
    auto c = mylist.begin();
    
    for (int i = 0; i < count; i++) {
        cin >> dir;
        if (dir == "visit") {
            cin >> val;
            bool flag = false;
            
            for (auto j = mylist.begin(); j != mylist.end(); j++) {
                if (*j == val) {
                    cout << *j << endl;
                    c = j;
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                cout << "Not Available" << endl;
            }
        } else if (dir == "next") {
            if (next(c) != mylist.end()) {
                c = next(c);
                cout << *c << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (dir == "prev") {
            if (c != mylist.begin()) {
                c = prev(c);
                cout << *c << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}
