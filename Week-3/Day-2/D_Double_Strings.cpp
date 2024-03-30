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
        int n;
        cin >> n;
        vector<string> v(n);
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = 1;
        }
        string res;
        for (int i = 0; i < n; i++)
        {
            bool ans = false;
            string str = v[i];
            for (int j = 0; j < str.size(); j++)
            {
                string str1 = str.substr(0, j + 1);
                string str2 = str.substr(j + 1, str.size() - j - 1);
                if (mp.find(str1) != mp.end() && mp.find(str2) != mp.end())
                {
                    ans = true;
                    break;
                }
            }
            if (ans)
            {
                res += '1';
            }
            else
            {
                res += '0';
            }
        }
        cout << res << "\n";
    }

    return 0;
}
