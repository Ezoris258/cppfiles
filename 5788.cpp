#include <bits/stdc++.h>
using namespace std;
const int N = 3e6 + 5;

int a[N], ans[N], st[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int top = 0;

    for (int i = n; i >= 1; i--)
    {
        while (top > 0 && a[st[top]] <= a[i])
        {
            top--;
        }

        if (top > 0)
        {
            ans[i] = st[top];
        }
        else
        {
            ans[i] = 0;
        }

        st[++top] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i]<<' ';
        
    }

    return 0;
}