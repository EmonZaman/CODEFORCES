#include<bits\stdc++.h>
using namespace std;
int main(){int p;cin>>p;while(p--){
    int n,m;
    cin>>n>>m;
    int a[n],i;for(i=0;i<n;++i){cin>>a[i];}
    int d=0;
    for(i=0;i<n-1;i++){
        if(a[i]<a[i+1]&&m>0){--m;a[i]++;d=i;i=-1;
        }
        if(m<1){cout<<d+1<<endl;break;}

    }
    if(m>=1){
    cout<<-1<<endl;}
}
return 0;
}
