#include <bits/stdc++.h>
#define ll long long
using namespace std;

int val(string s)
{
    if (s == "M")
    {
        return 0;
    }
    if (s.back() == 'L')
    {
        return s.size();
    }
    return s.size() * (-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int x = val(a);
        int y = val(b);
        if (x == y)
        {
            cout << "=\n";
        }
        else
        {
            cout << (x > y ? ">\n" : "<\n");
        }
    }

    return 0;
}
