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
        ll x, n, m;
        cin >> x >> n >> m;

        while (n > 0)
        {
            if (x <= 20)
            {
                break;
            }
            x = (x / 2) + 10;
            n--;
        }
        cout << (x > (m * 10) ? "NO\n" : "YES\n");
    }

    return 0;
}
