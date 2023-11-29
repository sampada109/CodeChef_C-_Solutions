#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int a,b;
	    cin>>a>>b;
	    if(a>b) cout<<"LOSS"<<endl;
	    else if(a==b) cout<<"NEUTRAL"<<endl;
	    else cout<<"PROFIT"<<endl;
	}
	return 0;
}
