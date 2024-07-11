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
        ll n, k, h;
        cin >> n >> k >> h;
        ll ans = 0;
        for (int i = n; i > 0; i--)
        {
            if (i >= h)
            {
                ans += n;
            }
            else
            {
                ll val = ((k * i) - h) / (k - 1);
                if (val >= 0)
                {
                    ans += val;
                }
                else
                {
                    break;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
