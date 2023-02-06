#include <bits/stdc++.h>
using namespace std;
class Student
{
private: // private access
    string name;
    int roll;

public: // public access
    void setInfo(string setName, int setRoll)
    {
        name = setName;
        roll = setRoll;
    }
    void print_info()
    {
        cout << "Name is " << name << ", "
             << "Roll is " << roll << "." << endl;
    }
};

int main()
{
    Student s1;
    s1.setInfo("Nurul Islam Rimon", 22);
    s1.print_info();
}