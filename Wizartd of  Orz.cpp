#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k = 8;
		cin >> n;
		printf("9");
		for(int i = 2; i <= n; i++){
			printf("%d", k++);
			if(k > 9) k = 0;
		}
		printf("\n");
	}
	return 0;
}
