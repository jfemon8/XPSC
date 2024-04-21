#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
vector<int> a(16);
int ans = 0;

void solve(int i, int sum)
{
    if (i >= n)
    {
        if (sum % 360 == 0 || sum == 0)
        {
            ans = 1;
        }
        return;
    }
    solve(i + 1, sum + a[i]);
    solve(i + 1, sum - a[i]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    solve(0, 0);
    if (ans)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
