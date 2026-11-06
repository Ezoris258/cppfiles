#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 2e5 + 5;

ll n, len[MAXN], lenr[MAXN], tot;
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

    ll tar = tot / 2, ans = 0, i = 1, j = 1, 
        proc = 0, rem = len[1], remr = lenr[1];

    while (proc < tar && i <= n && j <= n)
    {
        ll cur = min({rem, remr, tar - proc});
        if (ch[i] != chr[j])
            ans += cur;
        proc += cur;
        rem -= cur;
        remr -= cur;

        if (rem == 0 && ++i <= n)
            rem = len[i];
        if (remr == 0 && ++j <= n)
            remr = lenr[j];
    }

    cout << ans << '\n';

    return 0;
}