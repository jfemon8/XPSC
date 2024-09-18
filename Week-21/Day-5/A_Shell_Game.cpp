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

    ll n, pos;
    cin >> n >> pos;
    n %= 6;

    if (n % 2)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0 && pos == 2)
            {
                pos = 1;
            }
            else if (i % 2 == 0 && pos == 1)
            {
                pos = 2;
            }
            else if (i % 2 && pos == 1)
            {
                pos = 0;
            }
            else if (i % 2 && pos == 0)
            {
                pos = 1;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 && pos == 2)
            {
                pos = 1;
            }
            else if (i % 2 && pos == 1)
            {
                pos = 2;
            }
            else if (i % 2 == 0 && pos == 1)
            {
                pos = 0;
            }
            else if (i % 2 == 0 && pos == 0)
            {
                pos = 1;
            }
        }
    }

    cout << pos;

    return 0;
}
