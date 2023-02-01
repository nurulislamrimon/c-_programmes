#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{ // here we took the point of variable a and b
    int x = a;
    a = b;
    b = x;
}
int main()
{

    int a = 10, b = 30;
    swap(a, b);
    cout << a << " " << b << endl;
}