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
        string s;
        cin >> s;
        int l = 0, r = 0, u = 0, d = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                l++;
            }
            else if (s[i] == 'R')
            {
                r++;
            }
            else if (s[i] == 'U')
            {
                u++;
            }
            else if (s[i] == 'D')
            {
                d++;
            }
        }

        string ans = "";

        if ((l == 0 || r == 0) && (u == 0 || d == 0))
        {
            cout << "0\n\n";
        }
        else if (l == 0 || r == 0)
        {
            cout << "2\nUD\n";
        }
        else if (u == 0 || d == 0)
        {
            cout << "2\nLR\n";
        }
        else
        {
            int lr = min(l, r);
            int ud = min(u, d);
            cout << 2 * (lr + ud) << '\n';
            for (int i = 0; i < lr; i++)
            {
                cout << "L";
            }
            for (int i = 0; i < ud; i++)
            {
                cout << "U";
            }
            for (int i = 0; i < lr; i++)
            {
                cout << "R";
            }
            for (int i = 0; i < ud; i++)
            {
                cout << "D";
            }
            cout << '\n';
        }
    }

    return 0;
}
