#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << "1 1";
        return 0;
    }
    ll a, b;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i)
        {
            continue;
        }
        ll temp = n / i;
        if (__gcd(temp, i) == 1)
        {
            a = i;
            b = temp;
        }
    }

    cout << a << " " << b;

    return 0;
}
