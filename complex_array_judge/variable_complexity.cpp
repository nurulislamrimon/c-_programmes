#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Time complexity = O(n+1+n+1)=O(2*n+1)=O(n)
    Memory complexity = O(n+1+n+1)=O(2*n+1)=O(n)
    */
    int n; // O(1)
    cin >> n;
    vector<int> a(n); // O(n)
    // or, vector<int>a;a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = a[0];
    int mini = a[0]; // O(1)
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]); // O(n)
        sum = sum + a[i];
    }
    cout << "Max = " << maxi << ", Min = " << mini << ", Sum = " << sum << endl;
}