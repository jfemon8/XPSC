#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;
    if (x < 4 || y < 4)
    {
        if (pow(x, y) < pow(y, x))
        {
            cout << "<";
        }
        else if (pow(x, y) > pow(y, x))
        {
            cout << ">";
        }
        else
        {
            cout << "=";
        }
    }
    else
    {
        if (x > y)
        {
            cout << "<";
        }
        else if (x < y)
        {
            cout << ">";
        }
        else
        {
            cout << "=";
        }
    }

    return 0;
}
