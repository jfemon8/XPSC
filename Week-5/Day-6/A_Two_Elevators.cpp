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
        int a, b, c;
        cin >> a >> b >> c;
        if (a < (abs(b - c)) + c)
        {
            cout << "1\n";
        }
        else if (a > (abs(b - c)) + c)
        {
            cout << "2\n";
        }
        else
        {
            cout << "3\n";
        }
    }

    return 0;
}
