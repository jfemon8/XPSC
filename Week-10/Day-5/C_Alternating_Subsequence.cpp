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
        ll ans = 0, val = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] < 0 && a[i] < 0)
            {
                val = max(val, a[i]);
            }
            else if (a[i - 1] > 0 && a[i] > 0)
            {
                val = max(val, a[i]);
            }
            else
            {
                ans += val;
                val = a[i];
            }
        }
        ans += val;
        cout << ans << '\n';
    }

    return 0;
}
