#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "I am Nurul Islam Rimon";
    cout << a.size() << endl; // Length of string
    a.pop_back();             // remove the last letter from string
    a.erase(a.begin());       // remove the first letter from string && we can remove any letter by adding position. like a.begin()+2
    cout << a << endl;
    // ===============we need to take input by using getline========
    // if we use "cin" it will take input before a space
    string newString;
    getline(cin, newString);
    cout << newString;
}