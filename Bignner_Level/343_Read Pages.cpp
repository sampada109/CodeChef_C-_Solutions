#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((b*c)>=a) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
