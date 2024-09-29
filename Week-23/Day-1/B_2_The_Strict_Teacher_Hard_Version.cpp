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
        ll n, m, q;
        cin >> n >> m >> q;
        vector<ll> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        while (q--)
        {
            ll x;
            cin >> x;
            ll idx = lower_bound(a.begin(), a.end(), x) - a.begin();
            if (idx == 0)
            {
                cout << a[0] - 1 << '\n';
            }
            else if (idx == m)
            {
                cout << n - a.back() << '\n';
            }
            else
            {
                cout << (a[idx] - a[idx - 1]) / 2 << '\n';
            }
        }
    }

    return 0;
}
