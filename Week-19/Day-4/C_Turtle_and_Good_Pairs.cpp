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
        int n;
        string s;
        cin >> n >> s;
        vector<int> a(26, 0);
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        int total = 0;
        string ans = "";
        while (total < 26)
        {
            int cnt = 0;
            for (int i = 0; i < 26; i++)
            {
                if (a[i] == 0)
                {
                    cnt++;
                }
                else
                {
                    ans += 'a' + i;
                    a[i]--;
                }
            }
            total = cnt;
        }
        cout << ans << '\n';
    }

    return 0;
}