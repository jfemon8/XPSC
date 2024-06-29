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
        ll n, x, k;
        cin >> n >> x >> k;
        while (k > 0)
        {
            ll val = x - (n % x);
            if (k >= val)
            {
                n += val;
                k -= val;
            }
            else
            {
                n += k;
                k = 0;
            }
            while (n % x == 0)
            {
                n /= x;
            }
            if (n < x)
            {
                ll temp = x - n;
                if (k >= temp)
                {
                    k -= temp;
                    n = 1;
                }
                else
                {
                    n += k;
                    k = 0;
                }
                if (k > 0)
                {
                    n += k % (x - 1);
                }
                break;
            }
        }

        cout << n << '\n';
    }

    return 0;
}