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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int diff = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            diff = max(diff, a[i] - b[i]);
        }
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != 0 && a[i] - diff != b[i])
            {
                ans = false;
                break;
            }
        }
        if (ans)
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
