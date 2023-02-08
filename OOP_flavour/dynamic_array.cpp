#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int id;
    string name;
    Person(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    void print_info()
    {
        cout << "Id : " << id << ", Name : " << name << endl;
    };
};
int main()
{
    vector<Person> p;
    for (int i = 0; i < 10; i++)
    {
        p.push_back(Person(i, "Nurul Islam"));
    }
}
