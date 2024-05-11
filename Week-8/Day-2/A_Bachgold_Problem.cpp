#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll ans = n / 2;
    cout << ans << '\n';
    for (int i = 1; i < ans; i++)
    {
        cout << "2 ";
    }
    cout << (n % 2 == 1 ? "3\n" : "2\n");

    return 0;
}
