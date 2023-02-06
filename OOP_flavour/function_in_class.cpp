#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    void print_the_student()
    {
        cout << "Name = " << name << " "
             << "Roll = " << roll << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Nurul Islam Rimon";
    s1.roll = 10;
    s1.print_the_student();
}