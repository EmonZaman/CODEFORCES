#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n=0;

    while(t--)
    {

        int zero,zeroone,one;

        cin>>zero>>zeroone>>one;

        if(zeroone%2==1)
        {

            for(int i=0; i<one; i++)
                cout<<"1";
            if(zeroone%2==1)
            {
                for(int i=1; i<=zeroone; i++)
                {
                    if(i%2==1)
                        cout<<"1";
                    else
                        cout<<"0";
                }
                for(int i=1; i<=zero+1; i++)
                    cout<<"0";
            }
            cout<<endl;


        }
        else
        {

            if(zero==0 && zeroone>0 && one>0)
            {
                 for(int i=1;i<=zeroone+1;i++)
                 {
                      if(i%2==1)
                    cout<<"1";
                   else
                    cout<<"0";

                 }

                    for(int i=1;i<=one;i++)
                    cout<<"1";
                    cout<<endl;
                    continue;

            }
             if(zero>0&& zeroone>0 && one==0)
            {
                 for(int i=1;i<=zero+1;i++)
                    cout<<"0";
                 for(int i=1;i<=zeroone;i++)
                 {
                     if(i%2==1)
                    cout<<"1";
                   else
                    cout<<"0";

                 }


                    cout<<endl;
                    continue;

            }



            if(zero>0 && zeroone==0 && one==0 )
            {
                for(int i=1;i<=zero+1;i++)
                    cout<<"0";
                    cout<<endl;

                continue;
            }
            if(zero==0 && zeroone>0 && one==0 )
            {
                for(int i=1;i<=zeroone+1;i++)
                   if(i%2==1)
                    cout<<"0";
                   else
                    cout<<"1";
                    cout<<endl;
                continue;
            }
            if(zero==0 && zeroone==0 && one>0 )
            {
                for(int i=1;i<=one+1;i++)
                    cout<<"1";
                    cout<<endl;
                continue;
            }
             for(int i=1; i<=zeroone; i++)
                {
                    if(i%2==1)
                        cout<<"0";
                    else
                        cout<<"1";
                }
                if(zeroone==0)
                    one++;
                for(int i=0; i<one-1; i++)
                cout<<"1";
                cout<<"10";
                for(int i=1; i<=zero; i++)
                    cout<<"0";
                    cout<<endl;

        }






    }
}


