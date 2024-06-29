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
        if (n < k)
        {
            cout << n << '\n';
            continue;
        }
        if (n == k)
        {
            cout << "2\n";
            continue;
        }
        ll ans = 0;
        while (n > 0)
        {
            if (n % k == 0)
            {
                n /= k;
                ans++;
            }
            else
            {
                ans += n % k;
                n -= n % k;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
