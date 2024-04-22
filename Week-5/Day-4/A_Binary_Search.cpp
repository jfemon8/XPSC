#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (k--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool ans = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                cout << "YES\n";
                ans = true;
                break;
            }
            else if (a[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (!ans)
        {
            cout << "NO\n";
        }
    }

    return 0;
}
