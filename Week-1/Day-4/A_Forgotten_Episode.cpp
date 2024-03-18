#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool arr[n + 1] = {false};
    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        arr[a] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!arr[i])
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}
