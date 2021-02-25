#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
         long long int n,k;
        cin>>n>>k;

        for(int i=2; i<=k; i++)
        {
          long long   int check=n;
           long long  int big=-1;
            long long int small=11;
            if(check<10)
            {
                n=n+n*n;
               // cout<<" "<<n<<endl;
            }
            else
            {

                while(check>0)
                {
                    long long int temp=check%10;
                    check=check/10;
                    if(temp>big)
                    {
                        big=temp;
                    }
                    if(temp<small)
                        small=temp;

                }
                if(small==0)
                    break;
                n=n+big*small;


            }

        }
        cout<<n<<endl;
        // fflush(stdin);




    }
    return 0;
}
