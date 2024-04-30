#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll water(vector<ll> &a, ll n, ll m)
{
    ll w = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < m)
        {
            w += m - a[i];
        }
    }
    return w;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l = 1, r = 1e10;
        while (r > l + 1)
        {
            ll mid = (l + r) / 2;
            if (water(a, n, mid) > x)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout << l << '\n';
    }

    return 0;
}
