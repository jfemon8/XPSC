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
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();

        int subs[n + 1][m + 1];
        int len = 0;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                {
                    subs[i][j] = 0;
                }
                else if (a[i - 1] == b[j - 1])
                {
                    subs[i][j] = subs[i - 1][j - 1] + 1;
                    len = max(len, subs[i][j]);
                }
                else
                {
                    subs[i][j] = 0;
                }
            }
        }

        cout << n + m - 2 * len << '\n';
    }

    return 0;
}
