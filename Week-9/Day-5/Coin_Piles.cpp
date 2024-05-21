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
        int a, b;
        cin >> a >> b;
        if (a == 0 and b == 0)
        {
            cout << "YES\n";
        }
        else if (a == 0 || b == 0)
        {
            cout << "NO\n";
        }
        else
        {
            if (a > b)
            {
                swap(a, b);
            }
            if (2 * a < b)
            {
                cout << "NO\n";
            }
            else if ((a + b) % 3 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
