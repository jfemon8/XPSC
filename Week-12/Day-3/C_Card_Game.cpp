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
        vector<ll> a(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        a[n] = 0;
        ll ans = max({0LL, a[0], a[0] + a[1]});
        for (int i = 2; i < n + 1; i++)
        {
            ans += max(0LL, a[i]);
        }
        cout << ans << '\n';
    }

    return 0;
}
