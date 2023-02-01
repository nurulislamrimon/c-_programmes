#include <bits/stdc++.h>
using namespace std; // we should use this to use cout // std::cout also acceptable
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

// we can use a namespace as default by using -->> using namespace myNamespaceVariable