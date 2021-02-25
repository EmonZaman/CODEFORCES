#include<stdio.h>

int main()
{
    int a[1001],n,count=0,s[1000],k=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=1; i<n; i++)
    {


        if(a[i-1]+1==a[i])
        {


        }

        else
        {
            s[k]=a[i-1];

            k++;

            count++;
        }
    }
    s[k]=a[n-1];

    printf("%d\n",++count);

    for(int i=0; i<count; i++)
    {
        printf("%d ",s[i]);
    }
    return 0;
}

