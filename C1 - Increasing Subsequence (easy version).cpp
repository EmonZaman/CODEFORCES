#include<bits/stdc++.h>
using namespace std;
int a[200001];
char c[200001];
int main()
{
    int n;


    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    int temp=0,ans=-1;
    int i=0,j=n-1,count=0,k=0,check=0,i1=0,j1=j,high=0;


        while(i<=j && (a[i]<=n && a[j]<=n) )
        {


            if(a[i]>a[j] && a[j]>temp )
            {
               //  cout<<a[j]<<endl;
                c[k]='R';
                k++;
                temp=a[j];
                j--;
                j1--;
                count++;
               // high=a[j];

            }
            else if( a[i]>temp)
            {
                // cout<<a[i]<<endl;
                count++;
                c[k]='L';
                k++;
                temp=a[i];
                i++;
                i1++;

            }
            else if(a[i]<a[j] && a[i]>temp)
            {
                count++;
                c[k]='L';
                k++;
                temp=a[i];
                i++;
                i1++;
               // cout<<a[i]<<endl;
            }
            else if(a[j]>temp)
            {
                c[k]='R';
                k++;
                temp=a[j];
                j--;
                j1--;
                count++;
               // cout<<a[j]<<endl;

            }
            else
            {
                if(count>ans)
                {
                    ans=count;
                    check=check+ans;

                }

                count=0;
               // cout<<"change"<<endl;
               if(temp==n)break;

                // break;
                break;

            }
        }
    if(count>ans)
    {
        ans=count;



    }

    cout<<ans<<endl;
    for(int i=0; i<ans; i++)
        cout<<c[i];
}


//20
//19 20 2 11 16 3 1 12 9 8 18 17 7 15 4 10 6 5 13 14

