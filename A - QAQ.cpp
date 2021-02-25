#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int i,j,k,l,n,count=0;
    scanf("%s",a);
    n=strlen(a);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            for(k=j+1; k<n; k++)
            {
                if(a[i]=='Q')
                {
                    if(a[j]=='A')
                    {
                        if(a[k]=='Q')
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;

}

