#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l = -1, r = n;
        while (r > l + 1)
        {
            int m = (r + l) / 2;
            if (a[m] <= x)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        cout << l + 1 << '\n';
    }

    return 0;
}
