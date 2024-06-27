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
        ll n, x;
        cin >> n >> x;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            mp[val]++;
        }
        ll ans = 0;
        for (auto [a, b] : mp)
        {
            if (b > 0)
            {
                ll temp = a * x;
                if (mp[temp] >= b)
                {
                    mp[a] = 0;
                    mp[temp] -= b;
                }
                else
                {
                    ans += (b - mp[temp]);
                    mp[temp] = 0;
                    mp[a] = 0;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
