#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int first=0;
    int second=0;
    while(n--)
    {
        int value;
        scanf("%d",&value);
        if(value==1)
            first++;
        else
            second++;
    }
        if(second>0)
        {
             printf("2 ");
             second--;

        }

        if(first>0)
        {
            printf("1 ");
            first--;
        }
        if(first>0 || second>0)
        {
            while(second--)
            {
                printf("2 ");
            }

            while(first--)
            {
                 printf("1 ");
            }

        }


}

