#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if(a<b){
            int temp=a;
            a=b;
            b=temp;

        }int ans=0,remain=a-b,check;
        for(int i=10;i>0;i--)
        {
            check=remain/i;
            ans=ans+remain/i;
            remain=remain-check*i;
            if(remain==0)
                break;
        }
        cout<<ans<<endl;
    }
}

