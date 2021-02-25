#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        if (!(a & 1))
        {
         printf("%d ", a - 1);
        }
        else printf("%d ", a);
    }
    putchar('\n');
    return 0;
}
