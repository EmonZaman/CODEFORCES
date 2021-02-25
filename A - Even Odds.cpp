#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n,k,i,cnt = 0;
    cin>>n;
    cin>>k;
    if(n%2==1){
        if(k<=(n/2)+1){
            cnt= (k*2)-1;
        }
        else{
            k -= (n/2)+1;
            cnt = k*2;
        }
    }
    else{
        if(k<=(n/2)){
            cnt= (k*2)-1;
        }
        else{
            k -= (n/2);
            cnt = k*2;
        }
    }
    cout<<cnt<<endl;
}
