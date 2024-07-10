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
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();
        if (a[0] == b[0])
        {
            cout << "YES\n"
                 << a[0] << "*\n";
            continue;
        }
        if (a[n - 1] == b[m - 1])
        {
            cout << "YES\n"
                 << "*" << a[n - 1] << '\n';
            continue;
        }
        bool ans = false;
        int i, j;
        for (i = 1; i < n; i++)
        {
            for (j = 1; j < m; j++)
            {
                if (a[i] == b[j] && a[i - 1] == b[j - 1])
                {
                    ans = true;
                    break;
                }
            }
            if (ans)
            {
                break;
            }
        }
        if (ans)
        {
            cout << "YES\n"
                 << "*" << a[i - 1] << a[i] << "*\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
