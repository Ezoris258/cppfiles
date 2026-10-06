#include <bits/stdc++.h>
using namespace std;

struct toy
{
    int face;
    string name;
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<toy> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i].face >> t[i].name;
    }
    int pos=0;
    for (int i = 0; i < m; i++)
    {
        int a, s;
        cin >> a >> s;
        if ((t[pos].face ^ a )== 0){ // shun left in /right out
            pos=(pos-s%n+n)%n;
        }
        else {
            pos=(pos+s)%n;
        }
    }

    cout<<t[pos].name;

    return 0;
}