#include<bits/stdc++.h>
using  namespace std;
int prime(int n){
	if (n==2){
		return n;
	}
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				n++;
				i=1;
				continue;
			}
		}
		return n;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int d;
		cin>>d;
		int p1,p2;
		p1=prime(d+1);
		p2=prime(p1+d);
		cout<<p1*p2<<endl;
	}
}
