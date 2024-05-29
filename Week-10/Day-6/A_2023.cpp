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
        int n, k;
        cin >> n >> k;
        ll total = 1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            total *= x;
        }
        if (2023 % total != 0)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n"
             << 2023 / total;
        while (k > 1)
        {
            cout << " 1";
            k--;
        }
        cout << '\n';
    }

    return 0;
}
