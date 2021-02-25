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
        int a[n+2];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int i=0;

        int sum1=a[i],sum2=0,temp1=a[i],temp2=0,j=n-1;
        int count=1;
        int check=0;
        i++;


        for(int c=1; c<=n; )
        {
            if(c!=1)
            {
                temp1=0;
                check=0;
                while(temp2>=temp1 && c!=n)
                {
                    temp1=temp1+a[i];
                    //  cout<<" first "<<a[i]<<endl;

                    i++;
                    c++;
                    if(check==0)
                    {
                        count++;
                        check=1;
                    }

                }
                sum1=sum1+temp1;



            }
            temp2=0;
            check=0;
            while(temp1>=temp2 && c!=n)
            {
                temp2=temp2+a[j];
                //   cout<<"second "<<a[j]<<endl;

                j--;
                c++;
                if(check==0)
                {
                    count++;
                    check=1;
                }


            }
            sum2=sum2+temp2;


            if(c==n)break;

        }
        cout<<count<<" "<<sum1<<" "<<sum2<<endl;

    }
    return 0;


}

