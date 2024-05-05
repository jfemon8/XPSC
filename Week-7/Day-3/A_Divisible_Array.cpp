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
        if (n % 2)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << '\n';
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << 2 * i << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}
