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
            int val = a[i];
            for (int j = 2; j * j <= val; j++)
            {
                while (val % j == 0)
                {
                    mp[j]++;
                    val /= j;
                }
            }
            if (val > 1)
            {
                mp[val]++;
            }
        }
        bool ans = true;
        for (auto [x, y] : mp)
        {
            if (y % n != 0)
            {
                cout << "NO\n";
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << "YES\n";
        }
    }

    return 0;
}
