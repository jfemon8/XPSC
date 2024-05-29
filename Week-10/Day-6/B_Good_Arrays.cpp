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
        int n;
        cin >> n;
        ll total = 0;
        ll one = 0, other = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            total += x;
            if (x == 1)
            {
                one++;
            }
            else
            {
                other++;
            }
        }
        if (n == 1)
        {
            cout << "NO\n";
            continue;
        }
        ll need = 2 * one + other;
        if (need <= total)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
