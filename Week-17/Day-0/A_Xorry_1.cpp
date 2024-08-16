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
        ll x;
        cin >> x;
        ll dif = log2(x);
        ll val = pow(2, dif);
        cout << x - val << " " << val << '\n';
    }

    return 0;
}