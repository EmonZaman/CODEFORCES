#include<stdio.h>
int main()
{
    int n,check,ans;
    scanf("%d",&n);
    for(int i=1;i<=9;i++)
    {
        if(n==1)
        {
            printf("1\n");
            printf("1\n");
            return 0;
        }
        else if(n%i==0 && i<n)
        {
            check=i;
            //printf("i==%d\n",i);
            ans=n/i;
        }
    }
    printf("%d\n",ans);
    for(int i=1;i<=ans;i++)
    {
        printf("%d ",check);
    }
    return 0;
}

