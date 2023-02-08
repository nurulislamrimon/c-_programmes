#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool is_true = true;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // cout << "Low = " << low << ", mid = " << mid << ", high = " << high << "\n";
        if (a[mid] == k)
        {
            cout << "Yes " << mid << "\n";
            is_true = false;
            break;
        }
        if (a[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (is_true)
    {
        cout << "No";
    }
}
/*
10 10
1 2 4 5 6 10 11 12 14 15
*/