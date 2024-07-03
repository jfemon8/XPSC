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
        vector<ll> a(n), b(n);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += a[i];
        }
        ll mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            ans += b[i];
            mx = max(mx, b[i]);
        }
        cout << ans - mx << '\n';
    }

    return 0;
}
