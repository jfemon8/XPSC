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
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll>> a(n);
        vector<ll> b(n), ans(n);
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a[i] = {x, i};
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            ans[a[i].second] = b[i];
        }
        for (ll val : ans)
        {
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}
