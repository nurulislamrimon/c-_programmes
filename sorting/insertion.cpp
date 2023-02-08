#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int idx = i;
        while (idx >= i)
        {
            if (a[idx - 1] > a[idx])
            {
                swap(a[idx - 1], a[idx]);
                idx--;
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
/*
5
5 4 2 1 3

 */