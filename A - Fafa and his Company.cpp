#include<stdio.h>
int main()
{
    int i,j,k,l,n,count;
    scanf("%d",&n);

        count=1;
        for(i=2;i<=n/2;i++)
        {
            k=n-i;
            if(k%i==0)
            {
                count=count+1;
            }
        }
        printf("%d\n",count);

    return 0;
}

