#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 1;
        for (int p : primes)
        {
            bool ok = false;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % p == 0 && ans[i] == 0)
                {
                    ans[i] = cnt;
                    ok = true;
                }
            }
            if (ok)
            {
                cnt++;
            }
        }
        cout << cnt - 1 << '\n';
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
