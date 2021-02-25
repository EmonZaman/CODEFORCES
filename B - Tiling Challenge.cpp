#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c[51][51];
    scanf("%d ",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%c",&c[i][j]);
        }
        getchar();
    }

    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(c[i][j]=='.')
            {
                if(c[i-1][j]=='.' && c[i][j-1]=='.' && c[i][j+1]=='.'&& c[i+1][j]=='.')
                {
                    c[i-1][j]='#';
                    c[i+1][j]='#';
                    c[i][j+1]='#';
                    c[i][j-1]='#';
                    c[i][j]='#';
                    //cout<<"emon"<<endl;
                }
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(c[i][j]=='.')
            {
                cnt=1;
            }
            //cout<<c[i][j];
        }
       //cout<<endl;
    }
    if(cnt==1)
        printf("NO\n");
    else
        printf("YES\n");
}
