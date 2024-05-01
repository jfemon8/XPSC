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
        int n, one = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                one++;
            }
        }
        int res;
        sort(a.begin(), a.end());
        for (int i = one; i >= 0; i--)
        {
            int k = i;
            bool ans = true;
            for (int j = 2; j <= i; j++)
            {
                if (k < n and a[k] <= j)
                {
                    k++;
                }
                else
                {
                    ans = false;
                }
            }
            if (ans)
            {
                res = i;
                break;
            }
        }
        cout << res << '\n';
        }

    return 0;
}
