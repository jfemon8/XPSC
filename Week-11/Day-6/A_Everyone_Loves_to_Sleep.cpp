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
        int n, h, m;
        cin >> n >> h >> m;
        int ansh = 24, ansm = 60;
        for (int i = 0; i < n; i++)
        {
            int hh, mm;
            cin >> hh >> mm;
            int cnt = 0, hans, mans;
            if (mm < m)
            {
                mans = mm + 60 - m;
                cnt++;
            }
            else
            {
                mans = mm - m;
            }
            if (cnt > 0)
            {
                hh--;
            }
            if (hh < h)
            {
                hans = hh + 24 - h;
            }
            else
            {
                hans = hh - h;
            }
            if (ansh > hans)
            {
                ansh = hans;
                ansm = mans;
            }
            else if (ansh == hans and ansm > mans)
            {
                ansm = mans;
            }
        }

        cout << ansh << " " << ansm << '\n';
    }

    return 0;
}
