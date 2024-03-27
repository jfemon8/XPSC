#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int val = 0;
                for (int k = 0; k < m; k++)
                {
                    val += abs(v[i][k] - v[j][k]);
                }
                ans = min(ans, val);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
