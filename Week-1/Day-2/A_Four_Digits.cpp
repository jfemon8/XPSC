#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    if (n < 10)
    {
        s += '0';
        s += '0';
        s += '0';
    }
    else if (n < 100)
    {
        s += '0';
        s += '0';
    }
    else if (n < 1000)
    {
        s += '0';
    }
    s += to_string(n);
    cout << s;

    return 0;
}
