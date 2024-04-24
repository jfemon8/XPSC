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
        int n;
        cin >> n;
        vector<int> a(n), cnt(31);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < 30; j++)
            {
                if (a[i] & (1 << j))
                {
                    cnt[j]++;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            bool ans = true;
            for (int j = 0; j < 30; j++)
            {
                if (cnt[j] % i)
                {
                    ans &= false;
                }
                else
                {
                    ans &= true;
                }
            }
            if (ans)
            {
                cout << i << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
