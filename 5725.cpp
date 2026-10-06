#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n * n; i++)
    {
        printf("%02d", i);
        if (i % n == 0)
            cout << '\n';
    }

    cout << '\n';
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << ' ';
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%02d", sum);
            sum++;
        }
        cout << '\n';
    }

    return 0;
}