#include<bits/stdc++.h>
using namespace std;

int l[100005],r[100005];
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
            r[l[k]]=i;
            l[i]=l[k];
            r[i]=k;
            l[k]=i;
            

        }
        else {  //k  i  a
            l[r[k]]=i;
            r[i]=r[k];
            l[i]=k;
            r[k]=i;
            
        }

    }

    int m;  cin>>m;

    for(int i=0;i<m;i++){
        int rem;  cin>>rem;

        init[rem]=false;
    }
    
    int pos=0;
    while (r[pos]!=0)
    {
        if(init[r[pos]])
            cout<<r[pos]<<' ';
        pos=r[pos];
    }
    
    return 0;
    

}
