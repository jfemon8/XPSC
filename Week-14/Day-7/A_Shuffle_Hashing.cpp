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
        string s, h;
        cin >> s >> h;
        sort(s.begin(), s.end());
        bool ans = false;
        int n = s.size();
        int m = h.size();
        for (int i = 0; i <= m - n; i++)
        {
            string temp = "";
            for (int j = i; j < n + i; j++)
            {
                temp += h[j];
            }
            sort(temp.begin(), temp.end());
            if (s == temp)
            {
                ans = true;
                break;
            }
        }
        if (ans)
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
