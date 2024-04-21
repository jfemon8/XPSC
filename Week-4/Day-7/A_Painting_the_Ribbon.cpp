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
        int n, m, k;
        cin >> n >> m >> k;
        int res = n - ceil((1.0 * n) / m);
        if (res <= k)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
