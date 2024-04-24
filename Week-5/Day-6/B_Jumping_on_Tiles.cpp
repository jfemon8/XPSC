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
        string s;
        cin >> s;
        int n = s.size();
        map<char, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]].push_back(i);
        }
        int d, cost = 0;
        if (s[0] < s[n - 1])
        {
            d = 1;
        }
        else
        {
            d = -1;
        }
        vector<int> ans;
        for (char c = s[0]; c != s[n - 1] + d; c += d)
        {
            for (int val : mp[c])
            {
                ans.push_back(val);
            }
        }
        for (int i = 1; i < ans.size(); i++)
        {
            cost += abs(s[ans[i]] - s[ans[i - 1]]);
        }
        cout << cost << " " << ans.size() << '\n';
        for (int v : ans)
        {
            cout << v + 1 << " ";
        }
        cout << '\n';
    }

    return 0;
}
