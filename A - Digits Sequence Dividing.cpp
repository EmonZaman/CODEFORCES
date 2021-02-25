#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    while(n--)
    {
        int check;
        scanf("%d ",&check);
        cin>>a;
        //cout<<a<<endl;
        if(check==2 && a[0]>=a[1])
        {
            printf("NO\n");

        }
        else
        {
            printf("YES\n");
            printf("2\n");
            printf("%c ",a[0]);
            for(int i=1;i<check;i++)
            {
                cout<<a[i];
            }
            printf("\n");

        }

    }
}

