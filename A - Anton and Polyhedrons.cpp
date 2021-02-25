#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    char a[100];
    int c=0;
    while(n--)
    {
        cin>>a;
        if(a[0]=='I')
            c+=20;
        else if(a[0]=='T')
            c+=4;
        else if(a[0]=='C')
            c+=6;
        else if(a[0]=='D')
            c+=12;
        else if(a[0]=='O')
            c+=8;
    }
    cout<<c<<endl;
    return 0;

}

