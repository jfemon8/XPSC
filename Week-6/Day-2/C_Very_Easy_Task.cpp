#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, a, b;

bool good(ll m)
{
    return (m / a) + (m / b) >= n - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> a >> b;
    ll l = 0, r = 1e18;

    while (r > l + 1)
    {
        ll m = (r + l) / 2;
        if (good(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    if (n == 1)
    {
        r = 0;
    }
    cout << r + min(a, b) << '\n';

    return 0;
}
