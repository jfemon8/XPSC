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
        ll n;
        cin >> n;
        bool ans = false;
        for (ll i = 1; i <= 10000; i++)
        {
            double temp = (n * 1.0) - (i * i * i * 1.0);
            if (temp < 1)
            {
                break;
            }
            double c = cbrt(temp);
            ll cc = c;
            if (c - cc == 0)
            {
                ans = true;
                break;
            }
        }
        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
