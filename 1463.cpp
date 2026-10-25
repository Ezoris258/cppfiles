#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll bans = 1, bcnt = 1, x;
ll prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

void f(ll u, ll num, ll cnt, ll last_p)
{

    if (u >= 10 || num > x)
        return;

    if (cnt > bcnt || (cnt == bcnt && num < bans))
    {
        bcnt = cnt;
        bans = num;
    }

    for (int i = 1; i <= last_p; i++)
    {
        if (num * prime[u] <= x)
        {
            num *= prime[u];
            cnt *= (i + 1);
            f(u + 1, num, cnt, i);
            cnt /= (i + 1);
        }
        else break;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> x;

    f(0, 1, 1, 30);

    cout << bans;

    return 0;
}