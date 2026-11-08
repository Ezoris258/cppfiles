#include<bits/stdc++.h>
using namespace std;
int carpet[1001][1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        carpet[x1][y1]++;carpet[x2+1][y1]--;
        carpet[x1][y2+1]--;carpet[x2+1][y2+1]++;
        
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            carpet[j][i]+=carpet[j-1][i];
            carpet[j][i]+=carpet[j][i-1];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<carpet[j][i]<<' ';
        }
        cout<<'\n';
    }

    return 0;
}