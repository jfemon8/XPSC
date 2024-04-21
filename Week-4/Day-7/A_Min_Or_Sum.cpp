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
        int ans = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans |= a[i];
        }

        cout << ans << '\n';
    }

    return 0;
}
