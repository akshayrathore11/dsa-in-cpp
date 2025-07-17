#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

class Student
{
public:
    int marks;
    string name;
    Student() {}
    Student(int m, string n)
    {
        this->marks = m;
        this->name = n;
    }
};

class comparator
{
public:
    bool operator()(Student a, Student b)
    {
        return a.marks < b.marks;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, comparator> pq;

    pq.push(Student(90, "Anu"));
    pq.push(Student(95, "Akshay"));
    pq.push(Student(85, "Amit"));
    pq.push(Student(88, "Ankur"));

    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();

    return 0;
}