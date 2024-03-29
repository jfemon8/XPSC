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
        vector<ll> a(n);
        vector<ll> sum(n + 1);
        sum[0] = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum[i + 1] = sum[i] + a[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            if ((sum[n] + ((r - l + 1) * k) - (sum[r] - sum[l - 1])) % 2 != 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
