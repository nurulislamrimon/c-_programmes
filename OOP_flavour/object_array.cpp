#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int id;
    string name;
    Person(){

    };
    Person(int id, string name)
    {
        this->id = id;
        this->name = name;
    };
    void print_info()
    {

        cout << "Id : " << id << ", Name : " << name << endl;
    }
};
int main()
{
    Person p[10];
    for (int i = 0; i < 10; i++)
    {
        p[i] = Person(i, "Student");
    }
    for (int i = 0; i < 10; i++)
    {
        p[i].print_info();
    }
}
