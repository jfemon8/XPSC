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
        int n, b;
        cin >> n >> b;
        vector<int> a(n);
        int cnt = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & b) == b)
            {
                cnt &= a[i];
            }
        }
        if (cnt == b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
