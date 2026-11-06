#include<bits/stdc++.h>
using namespace std;
    string a1,a2,b1,b2;
    bool q1,q2,q3;
int main(){
    //freopen("travel.in","r",stdin);
    //freopen("travel.out","w",stdout);
    
    cin>>a1>>a2>>b1>>b2;
    
    if(a1==b1){
        cout<<1;
        q1=true;
    }
    else cout<<0;

    if(q1&&a2[1]==b2[1]&&a2[0]==b2[0]){
        cout<<1;
        q2=true;
    }
    else cout<<0;

    if(q2&&(((a2[2]>='A'&&a2[2]<='C')&&(b2[2]>='A'&&b2[2]<='C'))||((a2[2]>='D'&&a2[2]<='F')&&(b2[2]>='D'&&b2[2]<='F')))){
        cout<<1;
        q3=true;
    }
    else cout<<0;

    if(q3&&((abs(a2[2]-b2[2])==1)||((a2[2]>='D'&&a2[2]<='F')&&(b2[2]>='D'&&b2[2]<='F')))){
        cout<<1;
    }
    else cout<<0;
    cout<<'\n';

    return 0;
}