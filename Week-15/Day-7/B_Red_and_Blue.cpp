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
        int n, m;
        cin >> n;
        vector<ll> r(n);
        ll ans = 0, val1 = 0, val2 = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
            sum += r[i];
            val1 = max(val1, sum);
        }
        cin >> m;
        vector<ll> b(m);
        sum = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            sum += b[i];
            val2 = max(val2, sum);
        }
        ans = max(ans, val1 + val2);
        cout << ans << '\n';
    }

    return 0;
}
