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
        ll x, y;
        cin >> x >> y;
        ll s = max(x, y);
        ll ans = (s * s) - (s - 1);
        if (y > x)
        {
            if (y % 2)
            {
                ans += (y - x);
            }
            else
            {
                ans -= (y - x);
            }
        }
        else if (x > y)
        {
            if (x % 2)
            {
                ans -= (x - y);
            }
            else
            {
                ans += (x - y);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
