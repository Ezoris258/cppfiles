#include<bits/stdc++.h>
using namespace std;

char lc[256],rc[256];

void dfs(char c){
    if(c=='*')  return;
    cout<<c;
    dfs(lc[c]); dfs(rc[c]);
    
};

int main(){
int n;  cin>>n;


char root;
for(int i=0;i<n;i++){
    string s;
    cin>>s;

    if(i==0) root=s[0];
    lc[s[0]]=s[1];
    rc[s[0]]=s[2];
    
    
}

dfs(root);

return 0;
}