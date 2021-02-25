
#include <bits/stdc++.h>

using namespace std;


int main() {
    int l = 1, r = 1000000;
    while(l < r){
        int mid = (l+r+1)>>1;
        printf("%d\n",mid); fflush(stdout);
        char s[10]; scanf("%s",s);
        if(s[0]=='<') r = mid-1;
        else l = mid;
    }
    printf("! %d\n",l); fflush(stdout);
    return 0;
}
