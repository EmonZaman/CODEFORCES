#include<stdio.h>
#include<math.h>

int main()
{
    int m,n,i,result;
    scanf("%d %d",&n ,&m);
    i=pow(2,n);

    result=m%i;
    printf("%d",result);
    return 0;
}
