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
        ll n;
        cin >> n;
        ll sum = 0;
        while (n > 0)
        {
            sum += n;
            n /= 2;
        }
        cout << sum << '\n';
    }

    return 0;
}
