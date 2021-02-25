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


        int ans=INT_MAX;




        for(int i=0; i<31; i++)
        {
            int temp=a;
            int cnt=i;
            int temp1=b+i;
            while(temp>0)
            {
                if(temp1==1)
                {
                    cnt=a+1;
                    break;

                }
                else
                {

                    cnt++;
                    temp=temp/temp1;

                }

            }


            ans= min(ans,cnt);



        }
        cout<<ans<<endl;
    }
}
