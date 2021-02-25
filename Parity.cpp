
#include<stdio.h>
int main()
{
    int b,k,sum=0,check;
    scanf("%d %d",&b, &k);
    int a[k];
    check=b%2;
    for(int i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
        sum=sum*check+a[i];
    }
    if(sum%2==1)
    {
        printf("odd\n");
        return 0;
    }

        printf("even\n");
        return 0;



}
