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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        int p = 1;
        while (n > 0)
        {
            int h = n - n / 2;
            if (k <= h)
            {
                cout << p * (2 * k - 1) << '\n';
                break;
            }
            k -= h;
            p *= 2;
            n /= 2;
        }
    }

    return 0;
}
