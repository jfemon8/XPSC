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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), pref(n + 1), vec(n + 1), ans(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pref[i + 1] = pref[i] + a[i];
        }
        vec[0] = 0;
        for (int l = 1; l <= n; l++)
        {
            ll mx = LLONG_MIN;
            for (int i = 1; i + l - 1 <= n; i++)
            {
                mx = max(mx, pref[i + l - 1] - pref[i - 1]);
            }
            vec[l] = mx;
        }

        for (int i = 0; i <= n; i++)
        {
            ll res = LLONG_MIN;
            for (int j = 0; j < i; j++)
            {
                res = max(res, ans[j]);
            }
            for (int j = i; j <= n; j++)
            {
                res = max(res, vec[j] + (k * i));
            }
            ans[i] = res;
        }
        for (ll val : ans)
        {
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}
