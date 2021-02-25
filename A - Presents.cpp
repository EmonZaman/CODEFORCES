#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);


    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==i)
            {
                 printf("%d ",j+1);
                 break;
            }

        }
    }
    return 0;

}

