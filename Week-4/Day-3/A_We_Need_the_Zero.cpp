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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = -1, ans = 0;
        for (int i = 0; i < 256; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans ^= a[j] ^ i;
            }
            if (ans == 0)
            {
                res = i;
                break;
            }
            else
            {
                ans = 0;
            }
        }
        cout << res << '\n';
    }

    return 0;
}
