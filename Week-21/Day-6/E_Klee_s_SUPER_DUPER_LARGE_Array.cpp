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
        ll end = n + k - 1;

        auto sum = [&](ll left, ll right)
        {
            return ((right - left + 1) * (left + right)) / 2;
        };

        ll l = k, r = end;
        while (l < r)
        {
            ll mid = (l + r) / 2;
            if (sum(k, mid) < sum(mid + 1, end))
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }

        cout << min(abs(sum(k, l) - sum(l + 1, end)), abs(sum(k, l - 1) - sum(l, end))) << '\n';
    }

    return 0;
}