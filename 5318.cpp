#include<bits/stdc++.h>
using namespace std;
vector<int> g[100005];
bool vis[100005];

void bfs(int i){
    queue<int> q;
    q.push(i);
    vis[i]=true;

    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<' ';
        for(int a:g[u]){
            if(!vis[a]){
                vis[a]=true;
                q.push(a);
            }
        }

    }

}

void dfs(int a){
    vis[a]=true;
    cout<<a<<' ';
    for(int i : g[a]){
        if(!vis[i])  dfs(i);
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;  cin>>n>>m;
    for (int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        g[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
        sort(g[i].begin(),g[i].end());
    }

    dfs(1);
    cout<<'\n';
    memset(vis,false,sizeof(vis));

    bfs(1);

    return 0;
}