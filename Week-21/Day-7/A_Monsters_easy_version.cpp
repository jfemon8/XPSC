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
        ll n;
        cin >> n;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin() + 1, a.end());
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > a[i - 1] + 1)
            {
                ans += a[i] - (a[i - 1] + 1);
                a[i] = a[i - 1] + 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
