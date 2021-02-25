#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]==1)
            c=1;
    }
    if(c==1)
        printf("HARD\n");
    else
        printf("EASY\n");
}

