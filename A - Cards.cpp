#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    int temp=n;
    n=n/2;
    sum=sum/n;
    //cout<<sum<<endl;

        for(int j=0;j<temp;j++)
        {
            if(a[j]!=-111)
            for(int k=0;k<temp;k++)
            {
                if(a[j]+a[k]==sum && a[k]!=-111&& j!=k)
                {
                    cout<<j+1<<" "<<k+1<<endl;
                    a[j]=-111;
                    a[k]=-111;
                      n--;
                // cout<<n<<endl;
                  if(n==0)return 0;;
                    break;
                }
            }

        }

}
