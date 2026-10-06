#include<bits/stdc++.h>
using namespace std;
map<int,int> mp[100005];
int main(){
    int n,q;
    cin>>n>>q;
    
    for(int a=1;a<=q;a++){
        int t,i,j,k;
        cin>>t;
        if(t==1){
            cin>>i>>j>>k;
            mp[i][j]=k;
        }
        else{
            cin>>i>>j;
            
            cout<<mp[i][j]<<'\n';
        }
    }

}