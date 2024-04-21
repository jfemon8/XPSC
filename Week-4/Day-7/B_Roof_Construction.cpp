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
        int a = 1;
        while (a * 2 < n)
        {
            a *= 2;
        }
        for (int i = a - 1; i >= 0; i--)
        {
            cout << i << " ";
        }
        for (int i = a; i < n; i++)
        {
            cout << i << (i + 1 == n ? "\n" : " ");
        }
    }

    return 0;
}
