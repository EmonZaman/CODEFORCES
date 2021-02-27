#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k,ans=0;
		cin>>k;
		int n,m;
		cin>>n;
		for(int i=1;i<k;i++){
			cin>>m;
			int p=min(n,m);
			while(p*2<max(n,m)){
				p*=2;
				ans++;
			}
			n=m;
		}
		cout<<ans<<endl;
	}
	return 0;
}
