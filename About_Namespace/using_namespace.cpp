#include <bits/stdc++.h>
using namespace std;
namespace myNamespaceVariable
{
    int a = 20;
}
int main()
{
    int a = 10;
    cout << "this is global variable a = " << a << "\n";             // this is global variable a;
    cout << "this is scope variable a = " << myNamespaceVariable::a; // this is global variable a;
}