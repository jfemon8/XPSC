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
        char mat[11][11];
        ll ans = 0;
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == 'X')
                {
                    int r = i, c = j;
                    if (r > 5)
                    {
                        r = 10 - r + 1;
                    }
                    if (c > 5)
                    {
                        c = 10 - c + 1;
                    }
                    ans += min(r, c);
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
