#include <iostream>
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

class StudentComparator
{
public:
    bool operator()(Student a, Student b)
    {
        return a.marks < b.marks;
    }
};

int main()

{

    Student s1;
    Student s2;
    s1.marks = 93;
    s1.name = "Anu";

    s2.marks = 97;
    s2.name = "Akshay";

    StudentComparator cmp;
    if (cmp(s1, s2))
    {
        puts("Anu k marks Akshay se kam hai");
    } 
    else
    {
        puts("Akshay k marks Anu as kam hai");
    }

    return 0;
}