#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a > b)
    {
        ans += a;
        a--;
        ans += max(a, b);
    }
    else if (a < b)
    {
        ans += b;
        b--;
        ans += max(a, b);
    }
    else
    {
        ans += a + b;
    }
    cout << ans << "\n";

    return 0;
}
