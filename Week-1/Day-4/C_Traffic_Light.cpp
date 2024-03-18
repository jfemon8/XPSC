#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        int ans = 0;
        s += s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                for (int j = 0; j < n; j++)
                {
                    if (s[i + j] == 'g')
                    {
                        i += j;
                        ans = max(ans, j);
                        break;
                    }
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
