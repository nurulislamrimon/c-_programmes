#include <bits/stdc++.h>
using namespace std;
class User
{
private:
    string name;
    int age;
};
class Admin : User
{
private:
    string designation;
    void setInfo(string name, int age, string designation)
    {
        name = name;
        age = age;
        designation = designation;
    };
};
int main()
{
}
