#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int a,b;
	    cin>>a>>b;
	    if((a+1)<=b) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
