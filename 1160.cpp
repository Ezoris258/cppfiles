#include<bits/stdc++.h>
using namespace std;

int l[100005],r[10005];
bool init[100005];


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    l[0]=1; r[0]=1;
    l[1]=0; r[1]=0;

    init[0] = init[1]=true;

    for (int i = 2; i <= n; i++)
    {
        int k,p;  cin>>k>>p;

        init[i]=true;
        if(p==0){ //i k
            l[i]=l[k];
            r[i]=k;
            l[k]=i;
            r[l[k]]=i;

        }
        else {  //k  i  a
            r[i]=r[k];
            l[i]=k;
            r[k]=i;
            l[r[k]]=i;
        }

    }

    int m;  cin>>m;

    for(int i=0;i<m;i++){
        int rem;  cin>>rem;

        init[rem]=false;
    }
    
    bool first=true;
    int pos=0;
    
    

}
