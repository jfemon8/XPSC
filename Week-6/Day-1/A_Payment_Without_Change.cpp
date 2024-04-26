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
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        ll d = s / n;
        s -= (a < d ? a * n : d * n);
        cout << (b < s ? "NO\n" : "YES\n");
    }

    return 0;
}
