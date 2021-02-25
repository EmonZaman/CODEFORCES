#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    // sort(a,a+n,greater<int>());
    int sum1=0;
    int sum2=0;
    int j=n-1;
    int check=0;
    for(int i=0; ;)
    {
       // cout<<a[i]<<" "<<a[j]<<endl;
        if(check%2==1)
        {
            check++;
            if(a[i]>a[j])
            {
                sum1=sum1+a[i];
                i++;
            }
            else
            {
                sum1=sum1+a[j];
                j--;
            }




        }

        else
        {
            check++;
            if(a[i]>a[j])
            {
                sum2=sum2+a[i];
                i++;
            }
            else
            {
                sum2=sum2+a[j];
                j--;
            }

        }
        if(i==j)
        {
            check++;
            if(check%2==0)
                sum1=sum1+a[i];
            else
                sum2=sum2+a[i];
            break;
        }



        if(i==n-1 || j<0)break;

        //sum2=sum2+a[i];
    }
    cout<<sum2<<" "<<sum1<<endl;
}
