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

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll d = 0, len = LLONG_MAX;

    for (ll i = 0, j = 0; j < n; j++)
    {
        d = __gcd(d, a[j]);
        if (d == 1)
        {
            ll x = 0;
            for (i = j; x != 1; i--)
            {
                d = exchange(x, __gcd(x, a[i]));
            }
            len = min(len, j - i);
            i += 2;
        }
    }

    if (len == LLONG_MAX)
    {
        cout << "-1\n";
    }
    else
    {
        cout << len << '\n';
    }

    return 0;
}
