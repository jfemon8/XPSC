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

    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> a(n, 0), b(n, 0);
    ll v = 0, o = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i > 0 && s[i] == 'v' && s[i - 1] == 'v')
        {
            a[i]++;
            b[i]++;
        }
    }

    for (ll i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        b[i] += b[i + 1];
    }

    ll ans = 0;

    for (ll i = 2; i < n - 2; i++)
    {
        if (s[i] == 'o')
        {
            ans += a[i - 1] * b[i + 1];
        }
    }
    cout << ans << '\n';

    return 0;
}
