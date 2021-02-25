#include<stdio.h>
int main()
{
    int s[51],n,m,i,j,count;
    scanf("%d %d",&n,&m);
    count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);

    }
    for(j=0;j<n;j++)
    {
         if (s[j]>=s[m-1] && s[j]>0)
         {
             count++;
         }


    }
     printf("%d\n",count);
    return 0;
}

