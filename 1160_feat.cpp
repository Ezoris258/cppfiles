#include<bits/stdc++.h>
using namespace std;

int l[100005],r[100005];
bool init[100005]={true};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    l[1]=0;r[1]=0;  l[0]=0; r[0]=0;
    int n; cin>>n;

    for(int i=2;i<=n;i++){
        int k,p; cin>>k>>p;
        if(p==1){  // k   ki
            r[i]=r[k];
            l[r[k]]=i;
            l[i]=k;
            r[k]=i;
        }
        else {  // k  ik
            l[i]=l[k];
            r[l[k]]=i;
            r[i]=k;
            l[k]=i;
        }
    }

    cout<<'\n';
    int m;  cin>>m;
    for(int i=0;i<m;i++){
        int rem; cin>>rem;
        
    }


}