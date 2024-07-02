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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(n);
        map<ll, ll> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp1[a[i] % m]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            mp2[b[i] % m]++;
        }
        ll ans = 0;
        for (auto [x, y] : mp1)
        {
            for (auto [q, r] : mp2)
            {
                if ((x + q) % m == 0)
                {
                    ans += y * r;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
