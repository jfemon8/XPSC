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
        ll x, y;
        cin >> x >> y;
        int cnt = 0;
        int i = 0;
        while (i < 32)
        {
            if (((x >> i) & 1) == ((y >> i) & 1))
            {
                cnt++;
                i++;
            }
            else
            {
                break;
            }
        }
        if (y > x)
        {
            swap(x, y);
        }
        while (!x >> i)
        {
            cnt++;
            i++;
        }
        ll ans = pow(2, cnt);
        cout << ans << '\n';
    }

    return 0;
}