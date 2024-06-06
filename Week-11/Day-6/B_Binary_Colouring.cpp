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
        ll x;
        cin >> x;
        vector<int> a(32, 0);
        ll val = x;
        int i = 0;

        while (val > 0)
        {
            if (val % 2 == 1)
            {
                a[i] = 1;
                if (i > 0 && a[i - 1] != 0)
                {

                    a[i] = 0;
                    a[i - 1] = -1;
                    val += 2;
                }
            }
            val /= 2;
            i++;
        }

        cout << a.size() << '\n';
        for (int v : a)
        {
            cout << v << " ";
        }
        cout << '\n';
    }

    return 0;
}