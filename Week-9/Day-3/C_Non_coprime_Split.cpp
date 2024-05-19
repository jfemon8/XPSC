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
        int l, r;
        cin >> l >> r;
        if (r <= 3)
        {
            cout << "-1\n";
            continue;
        }
        if (l < r)
        {
            cout << r / 2 << " " << r / 2 << '\n';
            continue;
        }
        int ans = -1;
        for (int i = 2; i * i <= l; i++)
        {
            if (l % i == 0)
            {
                ans = i;
                break;
            }
        }
        if (ans == -1)
        {
            cout << "-1\n";
        }
        else
        {
            cout << ans << " " << l - ans << '\n';
        }
    }

    return 0;
}
