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

    ll n, k;
    cin >> n >> k;
    ll l = 0, r = 2 * n;
    while (l + 1 < r)
    {
        ll m = (l + r) / 2;
        ll op = n - m;
        ll cho = (op * (op + 1)) / 2;
        cho -= m;
        if (cho < k)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << l << '\n';

    return 0;
}
