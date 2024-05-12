#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<ll> tprimes;

bool isPrime(ll val)
{
    for (int i = 2; i * i <= val; i++)
    {
        if (val % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    tprimes.insert(4);
    for (int i = 3; i <= 1000000; i += 2)
    {
        if (isPrime(i))
        {
            tprimes.insert((ll)i * i);
        }
    }

    int n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        cout << (tprimes.find(x) == tprimes.end() ? "NO\n" : "YES\n");
    }

    return 0;
}
