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
        ll n, h;
        cin >> n >> h;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l = 0, r = 1e18 - 1;
        while (l < r)
        {
            ll m = (l + r) / 2;
            ll tot = 0;
            for (int i = 0; i < n; i++)
            {
                if (i < n - 1)
                {
                    ll val1 = a[i + 1] - a[i];
                    tot += (val1 < m ? val1 : m);
                }
                else
                {
                    tot += m;
                }
            }
            if (tot >= h)
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << r << '\n';
    }

    return 0;
}
