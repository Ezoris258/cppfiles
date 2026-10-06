#include<bits/stdc++.h>
using namespace std;

// int left[100005],reght[10005];

struct  student
{
    int l,id,r;
    bool init=true;
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;  cin>>n;

    vector<student> stu(n+5);
     stu[1]={-1,1,};
    for(int i=2;i<=n;i++){
        int k,p;
        cin>>k>>p;
        stu[i].id=i;
        if(p==0){
            stu[i].r=stu[k].id;
            stu[k].l=stu[i].id;
            stu[k-1].r=stu[i].id;
        }

        else {
            stu[i].l=stu[k].id;
            stu[k].r=stu[i].id;
            stu[k+1].l=stu[i].id;
        }


    }

    int m;  cin>>m;
    vector <int> p(m+1);
    for(int j=1;j<=m;j++){
        cin>>p[j];
    }
    sort(p.begin()+1,p.end());

    for(int j=1;j<=m;j++){
        if(stu[j].id==p[j])  stu[j].init=false;

    }
    for(int j=1;j<n;j++){
        if(stu[j].init)  cout<<stu[j].id<<' ';

    }

}
