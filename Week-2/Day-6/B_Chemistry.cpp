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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        if (n - k == 1)
        {
            cout << "YES\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                mp[s[i]]++;
            }
            int cnt = 0;
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                if (it->second % 2 == 1)
                {
                    cnt++;
                }
            }
            cout << ((cnt <= k + 1) ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
