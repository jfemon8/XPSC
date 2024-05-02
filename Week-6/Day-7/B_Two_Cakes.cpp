#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    int x = min(a, b);
    while (x > 0)
    {
        int temp = (a / x) + (b / x);
        if (temp >= n)
        {
            break;
        }
        x--;
    }
    cout << x;

    return 0;
}
