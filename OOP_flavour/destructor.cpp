#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    Person *father;
    // constructor with overloaded
    Person()
    {
        father = NULL;
    }
    Person(string name, string f_ather)
    {
        this->name = name;
        father = new Person;
        father->name = f_ather;
    };
    void print_info()
    {
        cout << "Name : " << name << ", Father : " << father->name << endl;
    }
    // destructor
    ~Person()
    {
        cout << "Destructor called\n";
        if (father != NULL)
            delete father;
    }
};
int main()
{
    Person p("A", "B");
    p.print_info();
}