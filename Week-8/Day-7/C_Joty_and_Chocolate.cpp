#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll lcm(ll a, ll b)
{
    ll g = __gcd(a, b);
    return (a * b) / g;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll val1 = n / a, val2 = n / b;
    ll s = val1 * p + val2 * q;
    ll l = lcm(a, b);
    ll val = n / l;
    s -= val * min(p, q);
    cout << s;

    return 0;
}
