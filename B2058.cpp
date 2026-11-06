#include<bits/stdc++.h>
using namespace std;
int a,b,c,n,t1,t2,t3;
int main(){
    
    cin>>n;
    while (n--)
    {
        cin>>t1>>t2>>t3;
        a+=t1;b+=t2;c+=t3;
    }
    
    cout<<a<<' '<<b<<' '<<c<<' '<<a+b+c;

    return 0;
}