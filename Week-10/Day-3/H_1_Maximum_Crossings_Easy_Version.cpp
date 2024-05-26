#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool connection[1001][1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        memset(connection, false, sizeof(connection));
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            for (int j = i; j > 0; j--)
            {
                for (int k = a[i]; k <= n; k++)
                {
                    if (connection[j][k])
                    {
                        ans++;
                    }
                }
            }
            connection[i][a[i]] = true;
        }
        cout << ans << '\n';
    }

    return 0;
}
