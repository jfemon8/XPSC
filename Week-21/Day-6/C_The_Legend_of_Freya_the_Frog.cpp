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
        ll x, y, d;
        cin >> x >> y >> d;
        ll a = ceil((x * 1.0) / d);
        ll b = ceil((y * 1.0) / d);
        ll ans = a + b;
        if (b > a)
        {
            ans += (b - a);
        }
        else if (a > b)
        {
            ans += (a - b) - 1;
        }

        cout << ans << '\n';
    }

    return 0;
}