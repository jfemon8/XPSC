#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        vector<bool> dp(n, false);
        x--;
        dp[x] = true;
        for (int i = 0; i < m; i++)
        {
            int num;
            char sym;
            cin >> num >> sym;
            vector<bool> new_dp(n, false);
            for (int j = 0; j < n; j++)
            {
                if (dp[j])
                {
                    if (sym == '0' || sym == '?')
                    {
                        new_dp[(j + num) % n] = true;
                    }
                    if (sym == '1' || sym == '?')
                    {
                        new_dp[(j + n - num) % n] = true;
                    }
                }
            }
            swap(dp, new_dp);
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (dp[i])
            {
                ans.push_back(i + 1);
            }
        }
        cout << ans.size() << '\n';
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}
