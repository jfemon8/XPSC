#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (k--)
    {
        ll x;
        cin >> x;
        ll l = 0, r = n - 1;
        ll ans;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (a[mid] > x)
            {
                r = mid - 1;
                if (mid == 0 || a[mid - 1] <= x)
                {
                    ans = mid;
                    break;
                }
            }
            else
            {
                l = mid + 1;
                if (mid + 1 == n)
                {
                    ans = mid + 1;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
