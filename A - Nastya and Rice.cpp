#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int check=a-b;
        int check2=a+b;
        int check3=c-d;
        int check4=c+d;
        if((a-b)*n>c+d || (a+b)*n<c-d)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }



    return 0;


}
