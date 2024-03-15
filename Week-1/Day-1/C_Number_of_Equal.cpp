#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;
    long long int ans = 0;
    while (i < n)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[i];
        while (i < n && a[i] == curr)
        {
            cnt1++;
            i++;
        }
        while (j < m && b[j] < curr)
        {
            j++;
        }
        while (j < m && b[j] == curr)
        {
            cnt2++;
            j++;
        }
        ans += 1ll * cnt1 * cnt2;
    }
    cout << ans << "\n";

    return 0;
}
