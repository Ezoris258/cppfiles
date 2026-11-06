#include<bits/stdc++.h>
using namespace std;
double n,ans;
int main(){
    cin>>ans>>n;
    while (n--)
    {
        ans*=1.001;
    }
    
   cout<<fixed<<setprecision(4)<<ans;

    return 0;
}