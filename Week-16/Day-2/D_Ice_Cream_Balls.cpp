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
        ll l = 1, r = 3e9 + 1, ans;
        while (l < r - 1)
        {
            ll mid = (l + r) / 2;
            if ((mid * (mid - 1)) / 2 <= n)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        ans = (l * (l - 1)) / 2;
        n -= ans;
        cout << l + n << '\n';
    }

    return 0;
}