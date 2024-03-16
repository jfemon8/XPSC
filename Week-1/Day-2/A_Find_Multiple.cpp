#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    while (ans < b)
    {
        if (ans < a)
        {
            ans += c;
        }
        else if (ans >= a && ans <= b)
        {
            break;
        }
    }
    if (ans > b)
    {
        cout << "-1\n";
    }
    else
    {
        cout << ans << "\n";
    }

    return 0;
}
