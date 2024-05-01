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
        ll n, k;
        cin >> n >> k;
        ll inc = k / n;
        ll val = inc + (k % n);
        while (val >= n)
        {
            inc += val / n;
            ll temp = val % n;
            val /= n;
            val += temp;
        }
        cout << k + inc << '\n';
    }

    return 0;
}
