#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll g = __gcd(a, b);
        while (g != 1)
        {
            b /= g;
            if (b == 1)
            {
                break;
            }
            g = __gcd(a, b);
        }

        if (b == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
