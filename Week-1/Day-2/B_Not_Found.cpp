#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ch = 'a';
    cin >> s;
    bool ans = false;
    while (ch <= 'z')
    {
        if (s.find(ch) != -1)
        {
            ch++;
        }
        else
        {
            ans = true;
            break;
        }
    }
    if (ans)
    {
        cout << ch << "\n";
    }
    else
    {
        cout << "None\n";
    }

    return 0;
}
