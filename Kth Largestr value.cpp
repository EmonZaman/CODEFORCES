#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin>>n>>q;
	int a[n], co=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i] == 1)co++;
	}
	for(int i=1;i<=q;i++){
		int t, s;
		cin>>t>>s;
		if(t == 2){
			if(s <= co)cout<<1<<endl;
			else cout<<0<<endl;
		}
		else {
			if(a[s] == 1)co--, a[s]=0;
			else co++,a[s]=1;
		}
	}
	return 0;
}
