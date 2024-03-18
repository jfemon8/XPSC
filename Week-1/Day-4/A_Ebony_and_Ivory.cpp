#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool ans = false;
    for (int i = 0; i <= 10000; i++)
    {
        if (a * i <= c && (c - a * i) % b == 0)
        {
            ans = true;
            break;
        }
    }
    if (ans)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
