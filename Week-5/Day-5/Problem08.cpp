#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i = 1;
    while (true)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
        {
            break;
        }
        cout << "CASE# " << i++ << ":\n";
        vector<int> a(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        while (q--)
        {
            int x;
            cin >> x;
            int m, l = 0, r = n - 1;
            bool ans = false;
            while (r >= l)
            {
                m = (r + l) / 2;
                if (a[m] == x)
                {
                    ans = true;
                    break;
                }
                else if (a[m] < x)
                {
                    l = m + 1;
                }
                else if (a[m] > x)
                {
                    r = m - 1;
                }
            }
            while (m > 0 && a[m - 1] == x)
            {
                m--;
            }
            if (ans)
            {
                cout << x << " found at " << m + 1 << '\n';
            }
            else
            {
                cout << x << " not found\n";
            }
        }
    }

    return 0;
}
