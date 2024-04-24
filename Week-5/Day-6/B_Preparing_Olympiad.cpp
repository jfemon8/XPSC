#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    ll ans = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll p = pow(2, n);
    for (ll i = 0; i < p; i++)
    {
        ll cnt = 0, mx = -1, mn = 1e18, sum = 0;
        ll k = i, j = 0;
        while (k)
        {
            if (k & 1)
            {
                cnt++;
                mn = min(mn, a[j]);
                mx = max(mx, a[j]);
                sum += a[j];
            }
            k >>= 1;
            j++;
        }
        if (cnt > 1 and sum <= r and sum >= l and mx - mn >= x)
        {
            ans++;
        }
    }
    cout << ans << '\n';

    return 0;
}
