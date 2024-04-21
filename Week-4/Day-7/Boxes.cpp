#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll cnt = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        ll x = log2(mx);
        ll val = pow(2, x);
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= val)
            {
                cnt++;
            }
        }
        if (cnt % 2)
        {
            cout << cnt / 2 + 1 << '\n';
        }
        else
        {
            cout << cnt / 2 << '\n';
        }
    }

    return 0;
}
