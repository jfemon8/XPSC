#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v1(n);
        vector<string> v2(n);
        vector<string> v3(n);
        unordered_map<string, int> mp;
        int p1 = 0, p2 = 0, p3 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            mp[v1[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
            mp[v2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v3[i];
            mp[v3[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[v1[i]] == 1)
            {
                p1 += 3;
            }
            else if (mp[v1[i]] == 2)
            {
                p1++;
            }

            if (mp[v2[i]] == 1)
            {
                p2 += 3;
            }
            else if (mp[v2[i]] == 2)
            {
                p2++;
            }

            if (mp[v3[i]] == 1)
            {
                p3 += 3;
            }
            else if (mp[v3[i]] == 2)
            {
                p3++;
            }
        }
        cout << p1 << " " << p2 << " " << p3 << "\n";
    }

    return 0;
}
