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
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;

        if ((sy - d <= 1 || sx + d >= n) && (sy + d >= m || sx - d <= 1))
        {
            cout << "-1\n";
            continue;
        }
        cout << n + m - 2 << '\n';
    }

    return 0;
}
