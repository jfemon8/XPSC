#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cin >> m;
    vector<int> g(m);
    for (int i = 0; i < m; i++)
    {
        cin >> g[i];
    }
    sort(b.rbegin(), b.rend());
    sort(g.rbegin(), g.rend());

    int cnt = 0, i = 0, j = 0;
    while (i < n && j < m)
    {
        if (b[i] - g[j] > 1)
        {
            i++;
        }
        else if (g[j] - b[i] > 1)
        {
            j++;
        }
        else
        {
            cnt++;
            i++;
            j++;
        }
    }
    cout << cnt << '\n';

    return 0;
}
