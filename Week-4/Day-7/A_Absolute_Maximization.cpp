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
        int mn = -1;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mn &= a;
            mx |= a;
        }
        cout << mx - mn << '\n';
    }

    return 0;
}
