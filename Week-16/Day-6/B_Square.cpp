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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        ll h = 0, w = 0;
        if (a == c)
        {
            h = a;
            w = b + d;
        }
        else if (a == d)
        {
            h = a;
            w = b + c;
        }
        if (h == w && h > 0)
        {
            cout << "Yes\n";
            continue;
        }

        if (b == c)
        {
            h = b;
            w = a + d;
        }
        else if (b == d)
        {
            h = b;
            w = a + c;
        }
        else
        {
            cout << "No\n";
            continue;
        }

        if (h == w)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
