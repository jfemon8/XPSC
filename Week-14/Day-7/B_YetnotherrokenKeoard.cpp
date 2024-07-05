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
        vector<int> lc, uc;
        for (int i = 0; i < s.size(); i++)
        {
            if (!lc.empty() && s[i] == 'b')
            {
                s[lc.back()] = 'b';
                lc.pop_back();
            }
            else if ('a' <= s[i] && s[i] <= 'z' && s[i] != 'b')
            {
                lc.push_back(i);
            }
            if (!uc.empty() && s[i] == 'B')
            {
                s[uc.back()] = 'B';
                uc.pop_back();
            }
            else if ('A' <= s[i] && s[i] <= 'Z' && s[i] != 'B')
            {
                uc.push_back(i);
            }
        }
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'b' && s[i] != 'B')
            {
                ans += s[i];
            }
        }
        cout << ans << '\n';
    }

    return 0;
}