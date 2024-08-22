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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (int j = 0; j < 2; j++)
        {
            ll mx = 0;
            vector<bool> vis(n + 1, false);
            for (int i = 0; i < n; i++)
            {
                ans += a[i];
                if (vis[a[i]])
                {
                    mx = max(mx, a[i]);
                }
                vis[a[i]] = true;
                a[i] = mx;
            }
        }
        for (int i = 0; i < n; i++)
        {
            ans += a[i] * (n - i);
        }
        cout << ans << '\n';
    }

    return 0;
}
