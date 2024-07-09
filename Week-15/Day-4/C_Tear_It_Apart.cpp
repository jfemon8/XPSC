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
        int ans = INT_MAX;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int cnt = 0, maxi = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == ch)
                {
                    maxi = max(maxi, cnt);
                    cnt = 0;
                }
                else
                {
                    cnt++;
                }
            }
            maxi = max(maxi, cnt);
            int mx = 0;
            while (maxi > 0)
            {
                mx++;
                maxi /= 2;
            }
            ans = min(ans, mx);
        }
        cout << ans << '\n';
    }

    return 0;
}
