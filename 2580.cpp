#include <bits/stdc++.h>
using namespace std;
const int N = 500005;//1005->500005
int tr[N][26], tot = 1;
bool is_end[N];
int vis[N];

void in(const string &s)
{

    int u = 1;
    for (size_t i = 0; i < s.length(); i++)
    {
        int c = s[i] - 'a';
        if (!tr[u][c])
        {
            tr[u][c] = ++tot;
        }
        u = tr[u][c];
    }
    is_end[u] = true;   //tot->u
}

int query(const string &s)
{
    int u = 1;
    for (size_t i = 0; i < s.length(); i++)
    {
        int c = s[i] - 'a';
        u = tr[u][c];
    }
    vis[u]++;
    if (u == 0||!is_end[u])//add ||!is_end[u]  in abc query ab u!=0 
        return 2;
    if (u != 0 && is_end[u] && vis[u] == 1)
        return 0;
    if (vis[u] > 1)
        return 1;

    return -1;
}

int main()
{

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        in(s);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        int res = query(s);
        if (res == 0)
        {
            cout << "OK" << '\n';
        }
        else if (res == 1)
        {
            cout << "REPEAT" << '\n';
        }
        else
        {
            cout << "WRONG" << '\n';
        }
    }

    return 0;
}