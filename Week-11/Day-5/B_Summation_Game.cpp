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
        int n, x, k;
        cin >> n >> k >> x;
        vector<ll> a(n), pref(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + a[i];
        }
        ll ans = LLONG_MIN;
        for (int i = 0; i <= k; i++)
        {
            ll sub, tot = pref[n] - pref[i];
            int range = i + x;
            if (range < n)
            {
                sub = pref[range] - pref[i];
            }
            else
            {
                sub = pref[n] - pref[i];
            }
            ans = max(ans, tot - (2 * sub));
        }
        cout << ans << '\n';
    }

    return 0;
}
