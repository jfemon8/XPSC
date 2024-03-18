#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > i + 1)
            {
                ans = max(ans, arr[i] - i - 1);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
