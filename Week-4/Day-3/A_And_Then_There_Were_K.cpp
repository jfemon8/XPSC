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
        int ans = log2(n);
        ans = pow(2, ans) - 1;
        cout << ans << '\n';
    }

    return 0;
}
