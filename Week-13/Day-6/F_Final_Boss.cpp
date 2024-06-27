#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll mod = 1e9 + 7;

    int t;
    cin >> t;
    while (t--)
    {
        ll h, n;
        cin >> h >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        ll l = 0, r = 1e12;
        while (l + 1 < r)
        {
            ll mid = (r + l) / 2;
            ll damage = 0;
            for (int i = 0; i < n; i++)
            {
                damage += ((((mid - 1) / b[i]) * a[i]) + a[i]) % mod;
            }
            if (damage < h)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        cout << r << '\n';
    }

    return 0;
}
