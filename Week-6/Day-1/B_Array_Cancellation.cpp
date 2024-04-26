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
        int n;
        cin >> n;
        vector<ll> a(n);
        ll val = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (val + a[i] < 0)
            {
                val = 0;
            }
            else
            {
                val += a[i];
            }
        }
        cout << val << '\n';
    }

    return 0;
}
