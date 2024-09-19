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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 50;
        for (int i = 0; i < n; i++)
        {
            int inv = 1, j = arr[i], val = arr[i];
            while (arr[j - 1] != val && inv < 3)
            {
                inv++;
                j = arr[j - 1];
            }
            ans = min(ans, inv);
        }
        cout << ans << '\n';
    }

    return 0;
}