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
        int n, i, c = 0;
        cin >> n;
        string s;
        cin >> s;
        for (i = 0; i < n - 2; i++)
        {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                c = 2;
            }
        }
        if (c == 0)
        {
            for (i = 0; i < n; i++)
            {
                if (s[i] == '.')
                {
                    c++;
                }
            }
        }
        cout << c << endl;
    }

    return 0;
}
