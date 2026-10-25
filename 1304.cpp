#include <bits/stdc++.h>
using namespace std;

bool is_p(int p)
{

    for (int i = 2; i * i <= p; i++)
    {
        if (p != 2 && p % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 4; i <= n; i += 2)
    {
        cout << i << '=';
        for (int j = 2; j < i; j++)
        {
            if (is_p(j) && is_p(i - j))
            {
                cout << j << '+' << i - j << '\n';
                break;
            }
        }
    }

    return 0;
}