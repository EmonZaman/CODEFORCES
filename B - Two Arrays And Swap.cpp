
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t1;
    cin>>t1;
    while(t1--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+2];
        int a2[n+2];
        long long int sum1=0,sum2=0;
        int sum3=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum3=sum3+a[i];



        }
        for(int i=0; i<n; i++)
        {
            cin>>a2[i];

        }
        sort(a,a+n);
        sort(a2,a2+n);
        if(k==0)
        {
            cout<<sum3<<endl;
            continue;
        }
        int check[n+2];


        int c=0;
        for(int i=n-1; i>=0; i--)
        {
            if(a[c]<a2[i])
            {
                a[c]=a2[i];
                //  cout<<a[i]<<endl;
                c++;

            }

            if(c==k)break;

        }


        for(int i=0; i<n; i++)
        {
            sum1=sum1+a[i];


        }
        cout<<sum1<<endl;






    }

}


