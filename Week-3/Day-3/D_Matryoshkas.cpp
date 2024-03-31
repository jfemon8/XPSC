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
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        int ans = n, cnt = 0, l = -1;
        for (auto it : mp)
        {
            if (it.first == l + 1)
            {
                ans -= min(it.second, cnt);
            }
            l = it.first;
            cnt = it.second;
        }

        cout << ans << "\n";
    }

    return 0;
}
