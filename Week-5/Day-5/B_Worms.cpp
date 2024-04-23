#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;
    vector<int> a(n), p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    p[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + a[i];
    }
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        int l = -1, r = n;
        while (r > l + 1)
        {
            int m = (r + l) / 2;
            if (p[m] < x)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        cout << r + 1 << '\n';
    }

    return 0;
}
