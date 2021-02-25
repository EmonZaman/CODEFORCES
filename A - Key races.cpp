#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v1,v2,t1,t2,sum,sum1;
    cin>>n>>v1>>v2>>t1>>t2;
    sum=(n*v1)+t1+t1;
    sum1=(n*v2)+t2+t2;
    if(sum==sum1)
        cout<<"Friendship"<<endl;
    else if(sum<sum1)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
    //return 0;
}

