#include<stdio.h>
int count[100000];

int main()
{
    int n,p,y,l=0,a[101],c[101],s[10000],ans=1;
    scanf("%d",&n);
    scanf("%d",&p);
    for(int i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
        s[l]=a[i];
        l++;

    }
    scanf("%d",&y);
    for(int i=0; i<y; i++)
    {
        scanf("%d",&c[i]);
        s[l]=c[i];
        l++;


    }


    for(int i=0; i<=l; i++)
    {
        count[s[i]-1]++;

    }
    for(int i=0; i<n; i++)
    {


        if(count[i]==  0)
        {
            ans=0;
            break;
        }
    }
    if(ans==1)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}




