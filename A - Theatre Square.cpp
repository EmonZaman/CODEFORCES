#include<stdio.h>
int main()
{
    long long int i,j,k,l;
    scanf("%lld%lld%lld",&i,&j,&k);
    if(i%k==0)
    {
        i=i/k;
    }
    else
    {
        i=i/k;
        i++;
    }
    if(j%k==0)
    {
        j=j/k;
    }
    else
    {
        j=j/k;
        j++;
    }
    printf("%lld\n",i*j);
    return 0;
}
