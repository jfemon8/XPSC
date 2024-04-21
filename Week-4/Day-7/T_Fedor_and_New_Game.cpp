#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool bit(int x, int i)
{
    return ((1 << i) & x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, x;
    cin >> n >> m >> k;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (bit(a[i], j) != bit(x, j))
            {
                c++;
            }
        }
        if (c <= k)
        {
            ans++;
        }
    }
    cout << ans << '\n';

    return 0;
}
