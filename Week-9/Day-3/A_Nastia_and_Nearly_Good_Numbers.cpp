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
        ll a, b, x, y, z;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO\n";
            continue;
        }
        if (b == 2)
        {
            z = a * b * 2;
            y = a * (2 * b - 1);
        }
        else
        {
            z = a * b;
            y = a * (b - 1);
        }
        x = a;
        cout << "YES\n"
             << x << " " << y << " " << z << '\n';
    }

    return 0;
}
