#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 1000005;
ll a[MAXN], stleft[MAXN], stright[MAXN], l[MAXN], r[MAXN], n, ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int top = 0;
    for (int i = n; i >= 1; i--)
    {
        while (top > 0 && a[stright[top]] >= a[i])
        {
            top--;
        }
        if (top > 0)
        {
            r[i] = stright[top];
        }
        else
        {
            r[i] = n + 1;
        }
        stright[++top] = i;
    }

    top = 0;
    for (int i = 1; i <= n; i++)
    {
        while (top > 0 && a[stleft[top]] >= a[i])
        {
            top--;
        }
        if (top > 0)
        {
            l[i] = stleft[top];
        }
        else
        {
            l[i] = 0;
        }
        stleft[++top] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, ((r[i] - l[i] - 1) * a[i]));
    }
    cout << ans;

    return 0;
}