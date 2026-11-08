#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 2e5 + 5;
ll n, len[MAXN], lenr[MAXN], ans, tot;
char ch[MAXN], chr[MAXN];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> len[i] >> ch[i];
        tot += len[i];
        lenr[n - i + 1] = len[i];
        chr[n - i + 1] = ch[i];
    }

    ll j = 1, i = 1, rem = len[1], remr = lenr[1],
       tar = tot / 2, proc = 0;

    while (proc < tar && i <= n && j <= n)
    {
        ll cur = min({rem, remr, tar - proc});
        if (ch[i] != chr[j])
        {
            ans += cur;
        }
        rem -= cur;
        remr -= cur;
        proc += cur;
        if (rem == 0 && ++i <= n)
            rem = len[i];
        if (remr == 0 && ++j <= n)
            remr = lenr[j];
    }

    cout << ans << '\n';

    return 0;
}