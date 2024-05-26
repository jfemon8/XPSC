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
        vector<pair<ll, ll>> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i].second >> a[i].first;
        }
        sort(a.begin(), a.end());
        pbds<ll> p;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += p.size() - p.order_of_key(a[i].second);
            p.insert(a[i].second);
        }
        cout << ans << '\n';
    }

    return 0;
}
