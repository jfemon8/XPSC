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
        ll n, k, q, ans = 0;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 0, r = 0;
        while (r < n)
        {
            if (a[r] > q)
            {
                l = r;
            }
            while (l < n && a[l] > q)
            {
                l++;
            }
            if (l <= r && (r - l + 1) >= k)
            {
                ans += r - l + 2 - k;
            }
            r++;
        }
        cout << ans << "\n";
    }

    return 0;
}
