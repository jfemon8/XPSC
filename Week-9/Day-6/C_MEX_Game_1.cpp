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
        vector<int> mp(n);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        int ans = n, x = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[i] == 0)
            {
                ans = i;
                break;
            }
            if (mp[i] == 1)
            {
                x++;
            }
            if (x == 2)
            {
                ans = i;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
