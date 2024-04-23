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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), pref(n + 1);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        for (ll i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i - 1];
        }
        while (q--)
        {
            ll tar;
            cin >> tar;
            ll l = 0, r = n + 1;
            while (r > l + 1)
            {
                ll m = (r + l) / 2;
                if (pref[m] < tar)
                {
                    l = m;
                }
                else
                {
                    r = m;
                }
            }
            if (r - 1 == n)
            {
                cout << "-1\n";
            }
            else
            {
                cout << r << '\n';
            }
        }
    }

    return 0;
}
