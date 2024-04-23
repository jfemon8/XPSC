#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        int l = -1, r = n;
        while (r > l + 1)
        {
            int m = (r + l) / 2;
            if (a[m] <= x)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        while (a[l] == x)
        {
            l--;
            if (l < 0)
            {
                break;
            }
        }
        if (l < 0)
        {
            cout << "X ";
        }
        else
        {
            cout << a[l] << " ";
        }

        l = -1, r = n;
        while (r > l + 1)
        {
            int m = (r + l) / 2;
            if (a[m] < x)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        while (a[r] == x)
        {
            r++;
            if (r == n)
            {
                break;
            }
        }
        if (r == n)
        {
            cout << "X\n";
        }
        else
        {
            cout << a[r] << "\n";
        }
    }

    return 0;
}
