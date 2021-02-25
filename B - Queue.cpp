#include<bits/stdc++.h>
using namespace std;

int main()
{
  int check[1000001];
    int update[1000001];
    memset(check, 0, 1000001*sizeof(check[0]));
    int x,y,n;
    cin>>n;
    int v=n-2;
    while(n--)
    {
        cin>>x>>y;
        update[x]=y;
        // cout<<upadate[x]<<endl;
        check[x]--;
        check[y]++;
    }
    int first=0;
    while(check[first]>=0)
    {
        x=update[0];
        first++;
        //cout<<check[first]<<endl;

    }

    cout<<first<<" "<<x<<" ";
    // cout<<"update 7"<<update[7]<<endl;
    int temp;
    while(v--)
    {
        // cout<<"first "<<first<<endl;
        cout<<update[first]<<" ";
        temp=update[first];
        first=x;
        //cout<<first<<endl;
        x=temp;
    }

}
//4
//92 31
//0 7
//31 0
//7 141
 
