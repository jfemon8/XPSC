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
        vector<int> arr(1001, -1002001);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[x] = i + 1;
        }
        int ans = -1;
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (__gcd(i, j) == 1)
                {
                    ans = max(ans, arr[i] + arr[j]);
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}