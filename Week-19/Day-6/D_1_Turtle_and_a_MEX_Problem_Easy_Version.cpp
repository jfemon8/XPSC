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

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, fmex = 0;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            ll l;
            cin >> l;
            vector<ll> a(l + 3, 0);
            for (int j = 0; j < l; j++)
            {
                ll val;
                cin >> val;
                if (val <= l + 1)
                {
                    a[val]++;
                }
            }
            ll v = 0;
            while (a[v] > 0)
            {
                v++;
            }
            v++;
            while (a[v] > 0)
            {
                v++;
            }
            fmex = max(fmex, v);
        }

        ll ans = 0;
        if (fmex >= m)
        {
            ans += fmex * (m + 1);
        }
        else
        {
            ans += ((m * (m + 1)) / 2) - ((fmex * (fmex + 1)) / 2);
            ans += fmex * (fmex + 1);
        }
        cout << ans << '\n';
    }

    return 0;
}