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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        map<pair<ll, ll>, ll> x, y, z;
        map<pair<pair<ll, ll>, ll>, ll> mp2;

        for (ll i = 0; i < (n - 2); i++)
        {
            ans += x[{a[i], a[i + 1]}]++;
            ans += y[{a[i], a[i + 2]}]++;
            ans += z[{a[i + 1], a[i + 2]}]++;
        }

        for (ll i = 0; i < (n - 2); i++)
        {
            ans -= 3 * mp2[{{a[i], a[i + 1]}, a[i + 2]}]++;
        }

        cout << ans << '\n';
    }

    return 0;
}
