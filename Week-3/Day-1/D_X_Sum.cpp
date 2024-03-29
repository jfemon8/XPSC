#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m;
ll mat[201][201];

ll topleft(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return 0;
    }
    return mat[i][j] + topleft(i - 1, j - 1);
}
ll topright(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return 0;
    }
    return mat[i][j] + topright(i - 1, j + 1);
}
ll bottomleft(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return 0;
    }
    return mat[i][j] + bottomleft(i + 1, j - 1);
}
ll bottomright(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return 0;
    }
    return mat[i][j] + bottomright(i + 1, j + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll sum = mat[i][j];
                sum += topleft(i - 1, j - 1);
                sum += topright(i - 1, j + 1);
                sum += bottomleft(i + 1, j - 1);
                sum += bottomright(i + 1, j + 1);
                ans = max(ans, sum);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
