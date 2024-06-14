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
        int n, m;
        cin >> n >> m;
        int mat[n][m], ans[n][m];
        bool use[n][m];
        vector<pair<ll, pair<int, int>>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> a(m);
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
                ans[i][j] = 0;
                use[i][j] = false;
                v.push_back({mat[i][j], {i, j}});
            }
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < m; i++)
        {
            auto [x, y] = v[i];
            int ii = y.first;
            int jj = y.second;
            ans[ii][i] = x;
            use[ii][jj] = true;
        }

        for (int i = 0; i < n; i++)
        {
            int idx = 0;
            for (int j = 0; j < m; j++)
            {
                if (ans[i][j] != 0)
                {
                    continue;
                }
                while (idx < m && use[i][idx])
                {
                    idx++;
                }
                ans[i][j] = mat[i][idx];
                use[i][idx++] = true;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}
