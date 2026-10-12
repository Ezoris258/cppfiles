#include<bits/stdc++.h>
using namespace std;

int fa[200005];

int find(int &x){
    if(fa[x]==x) return x;
    else {
        fa[x] = find(fa[x]);
        return fa[x];
    };
}


void hb(int &x,int &y){
    int a,b;
    a=find(x); b=find(y);
    if(a!=b){
        fa[a]=b;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n,m;  cin>>n>>m;

    for (int i = 1; i <= n; i++)
    {
        fa[i]=i;
    }
    

    for(int i=0;i<m;i++){
        int z,x,y;  cin>>z>>x>>y;
        
    
        if(z==1){
            hb(x,y);
        }
        else{
            if(find(x)==find(y)){
                cout<<'Y'<<'\n';

            }
            else cout<<'N'<<'\n';
        }
    }

    return 0;
}