#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    here we have constant number of variable
    so the complexity of this programme is
    *time complexity O(1); O means Order
    *memory complexity O(1)
    */
    int a, b, c;
    cin >> a >> b >> c;
    int maxi = max({a, b, c}); // maximum value
    int mini = min({a, b, c}); // minimum value
    int sum = a + b + c;
    int mult = a * b * c;
    cout << "Your input is: a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "Max number = " << maxi << ", Min number = " << mini << ", Sum = " << sum << ", Mult = " << mult << endl;
}