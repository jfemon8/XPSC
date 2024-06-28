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
        ll a, b, n;
        cin >> n >> a >> b;

        if (a > b)
        {
            cout << n * a << '\n';
            continue;
        }

        if (n < (b - a))
        {
            ll temp = b - n;
            cout << (b * (b + 1) / 2) - (temp * (temp + 1) / 2) << '\n';
            continue;
        }

        ll ans = (b * (b + 1) / 2) - (a * (a + 1) / 2);
        ll temp = n - (b - a);
        ans += temp * a;
        cout << ans << '\n';
    }

    return 0;
}