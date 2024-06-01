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

    int n, q;
    cin >> n >> q;
    vector<ll> a(n), diff(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        diff[l - 1] += 1;
        diff[r] -= 1;
    }
    for (int i = 1; i <= n; i++)
    {
        diff[i] += diff[i - 1];
    }
    sort(diff.rbegin(), diff.rend());
    sort(a.rbegin(), a.rend());

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (a[i] * diff[i]);
    }
    cout << ans << '\n';

    return 0;
}
