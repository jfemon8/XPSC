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
        ll l = 0, r = 1e9;
        while (l + 1 < r)
        {
            ll mid = (l + r) / 2;
            ll val1 = (mid / 2) + 1;
            ll val2 = mid - val1 + 1;
            if (val1 * val2 < n)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        cout << l << '\n';
    }

    return 0;
}
