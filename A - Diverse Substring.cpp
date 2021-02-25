#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
   // gets(a);
   // int l=strlen(a);
    cin>>a;
   // puts(a);
    int check=-1,i,c=0;
    for( i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
           c=1;
           break;

        }
    }
    if(c==0) cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl<<a[i]<<a[i+1]<<endl;
}

