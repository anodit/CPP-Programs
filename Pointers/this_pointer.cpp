#include<iostream>
using namespace std;

class Student
{
public:
    int sid;  // instance variable
    string sname; // instance variable
    Student(int sid, string sname)
    {
        this->sid = sid;
        this->sname = sname;
    }
    void display()
    {
        cout<<sid<<" "<<sname<<endl;
    }
};

int main()
{
    Student s1 = Student(101,"Mohit");
    Student s2 = Student(202,"Rohit");
    s1.display();
    s2.display();

    return 0;
}
