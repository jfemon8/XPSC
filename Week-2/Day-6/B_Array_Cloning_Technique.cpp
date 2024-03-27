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
        map<ll, ll> mp;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            cnt = max(cnt, mp[x]);
        }
        ll val = ceil(log2(1. * n / cnt));
        ll ans = n - cnt;
        cout << ans + val << "\n";
    }

    return 0;
}
