#include <iostream>
using namespace std;

int main() {
    int a,b,c;
	cin>>a>>b>>c;
	while(b<a+1||c<a+2){
	    a--;
	}
	cout<<3*a+3;
	return 0;
}
