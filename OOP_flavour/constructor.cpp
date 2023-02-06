#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int id;
    int age;
    // this is constructor fuction=====================
    Person(string n, int i, int a)
    {
        name = n; // this->name=n;
        id = i;
        age = a;
    }
    // this is constructor overload===============
    Person(string n)
    {
        name = n;
    }
    void print_info()
    {
        cout << "Name : " << name << ", id : " << id << ", age : " << age << endl;
    };
};
int main()
{
    Person p1("Nurul Islam Rimon", 10, 23);
    p1.print_info();
    Person p2("Abdul Karim Rasel");
    p2.print_info();
}