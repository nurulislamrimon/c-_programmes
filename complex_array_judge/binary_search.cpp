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
    sort(a.begin(), a.end()); // sorting in accending way

    bool is_exist = true;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        cout << "Low = " << low << ", mid = " << mid << ", high = " << high << "\n";
        if (a[mid] == k)
        {
            cout << "Yes " << mid << "\n";
            is_exist = false;
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
    if (is_exist)
    {
        cout << "No\n";
    }
}
/*
10 10
1 12 14 2 4 10 5 6 11 15
*/