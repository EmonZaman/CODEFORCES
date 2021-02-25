
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6];
    int row,column,ans;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        cin>>a[i][j];
        if(a[i][j]==1)
        {
            row=j+1;
            column=i+1;
        }
        }
    }
    //printf("%d %d\n",row,column);
    row=3-row;
    column=3-column;
    row=abs(row);
    column=abs(column);
    ans=row+column;

   // int ans=abs(3-j)+abs(3-i);
    cout<<ans<<endl;
}

