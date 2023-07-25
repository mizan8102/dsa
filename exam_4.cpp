
#include<bits/stdc++.h>

#include<iostream>
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
class cmp {
    public:
        bool operator()(const Student& a, const Student& b) const {
            if (a.marks != b.marks) {
                return a.marks < b.marks; 
            }
            return a.roll > b.roll;
        }
    };

int main() {
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; ++i) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    int num;
    cin >> num;

    for(int i=0; i<num; i++){
        int hh;
        cin >> hh;

        if (hh == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        } else if (hh == 1) {
            if (!pq.empty()) {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            } else {
                cout << "Empty" << endl;
            }
        } else if (hh == 2) {
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty()) {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                } else {
                    cout << "Empty" << endl;
                }
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
