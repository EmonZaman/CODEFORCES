#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int c=1;
        int i=0;
        int count=0;
        while(n>0)
        {
            int temp=n%10;

            if(temp!=0)
            {
                a[i]=temp*c;
               // cout<<a[i]<<endl;
                i++;
                count++;
            }
            c=c*10;
            n=n/10;
        }
        cout<<count<<endl;
        for(int i=0;i<count;i++)
            cout<<a[i]<<" ";
        cout<<endl;


    }



    return 0;


}
