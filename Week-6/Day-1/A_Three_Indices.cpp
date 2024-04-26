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
        int n, x, y, z;
        cin >> n;
        vector<int> a(n);
        vector<pair<int, int>> b;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b.push_back({a[i], i});
        }
        sort(b.rbegin(), b.rend());
        bool ans = false;
        for (auto child : b)
        {
            int i = child.second - 1;
            int j = child.second + 1;
            int val = child.first;
            bool ans1 = false, ans2 = false;
            while (i >= 0)
            {
                if (a[i] < val)
                {
                    x = i + 1;
                    ans1 = true;
                    break;
                }
                i--;
            }
            while (j < n)
            {
                if (a[j] < val)
                {
                    z = j + 1;
                    ans2 = true;
                    break;
                }
                j++;
            }
            ans = ans1 & ans2;
            if (ans)
            {
                y = child.second + 1;
                break;
            }
        }
        if (ans)
        {
            cout << "YES\n"
                 << x << " " << y << " " << z << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
