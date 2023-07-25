#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string uName, int uRoll, int uMarks) {
        this->name = uName;
        this->roll = uRoll;
        this->marks = uMarks;
    }
};

class Cmp {
public:
    bool operator()(Student a, Student b) {
        if (a.marks != b.marks) {
            return a.marks < b.marks;
        }
        return a.roll > b.roll;
    }
};

int main() {
    int N,Q;
    cin >> N;

    priority_queue<Student, vector<Student>, Cmp> pq;

    for (int i = 0; i < N; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student st(name, roll, marks);
        pq.push(st);
    }

    cin >> Q;

    while (Q--) {
        int cmd;
        cin >> cmd;
        if (cmd == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student st(name, roll, marks);
            pq.push(st);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
    else if (cmd == 1) {
            if (!pq.empty()) {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 2) {
            if (!pq.empty()) {
                pq.pop();
            }
            else {
                cout << "Empty" << endl;
            }
        if (!pq.empty()) {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}