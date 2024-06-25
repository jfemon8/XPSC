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
        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());

        if (a[0] * d < c)
        {
            cout << "Impossible\n";
            continue;
        }

        vector<ll> pref(max(n, d));
        pref[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + a[i];
        }
        for (int i = n; i < d; i++)
        {
            pref[i] = pref[i - 1];
        }

        if (pref[d - 1] >= c)
        {
            cout << "Infinity\n";
            continue;
        }

        ll l = 0, r = d + 1;
        while (l + 1 < r)
        {
            ll mid = (l + r) / 2;
            ll temp = d;
            ll res = 0;
            while (temp > mid)
            {
                res += pref[mid];
                temp -= mid + 1;
            }
            if (temp > 0)
            {
                res += pref[temp - 1];
            }
            if (res < c)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout << l << '\n';
    }

    return 0;
}
