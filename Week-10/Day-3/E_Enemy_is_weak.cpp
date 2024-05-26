#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll ans = 0, n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    pbds<ll> p, q;
    vector<ll> pref(n), suf(n);
    for (ll i = n - 1; i >= 0; i--)
    {
        suf[i] = p.order_of_key(a[i]);
        p.insert(a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        pref[i] = q.size() - q.order_of_key(a[i]);
        q.insert(a[i]);
    }

    for (ll i = 0; i < n; i++)
    {
        ans += suf[i] * pref[i];
    }

    cout << ans << '\n';

    return 0;
}
