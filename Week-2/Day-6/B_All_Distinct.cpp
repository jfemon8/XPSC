#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, ans = 0;
        cin >> n;
        unordered_map<int, int> mp;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        for (auto res = mp.begin(); res != mp.end(); res++)
        {
            if (res->second % 2 == 1)
            {
                ans++;
            }
            else
            {
                cnt++;
            }
        }
        ans += cnt - (cnt % 2);
        cout << ans << "\n";
    }

    return 0;
}
