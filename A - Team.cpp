#include<stdio.h>
int main()
{
    int i,j,k,l,n,count=0,count1,n1,n2,n3;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&n1,&n2,&n3);
        count1=0;
        if(n1==1)
        {
            count1++;
        }
         if(n2==1)
        {
            count1++;
        }
         if(n3==1)
        {
            count1++;
        }
        if(count1>=2)
        {
            count++;
        }

    }
    printf("%d\n",count);
    return 0;
}
