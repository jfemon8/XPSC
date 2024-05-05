#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n / 2; i++)
    {
        if (i % 2)
        {
            s += 'b';
            s += 'b';
        }
        else
        {
            s += 'a';
            s += 'a';
        }
    }
    if (n % 2)
    {
        s = 'b' + s;
    }
    cout << s << '\n';

    return 0;
}
