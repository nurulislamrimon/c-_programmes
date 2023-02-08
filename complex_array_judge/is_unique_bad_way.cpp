#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Time complexity = O(n*n)
    Memory complexity = O( )
     */
    int n; // O(1)
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // O(n)
    }

    for (int i = 0; i < n; i++)
    {
        string ans = "Yes\n"; // O(1)
        for (int j = 0; j < n; j++)
        { // =================================== O(n*n)
            if (i == j)
            {
                continue;
            }

            if (a[i] == a[j])
            {
                ans = "No\n";
            }
        }
        cout << "i = " << i << " " << ans;
    }
}

/*
4
2 4 6 2
 */