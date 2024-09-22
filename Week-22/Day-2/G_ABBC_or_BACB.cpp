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

        int ans = 0, cnt = 0, id1 = 0, id2 = 0, mini = INT_MAX;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                ans++;
                cnt++;
            }
            else
            {
                id1 = 1;
                if (i > 0 && s[i - 1] == 'B')
                {
                    id2 = 1;
                }
                if (cnt > 0)
                {
                    mini = min(mini, cnt);
                    cnt = 0;
                }
            }
        }
        if (cnt > 0)
        {
            mini = min(mini, cnt);
        }
        if (id1 == 0)
        {
            cout << "0\n";
        }
        else if (s[0] == 'B' || s.back() == 'B' || id2 == 1)
        {
            cout << ans << '\n';
        }
        else
        {
            cout << ans - mini << '\n';
        }
    }

    return 0;
}
