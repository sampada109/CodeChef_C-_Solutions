#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int a,b;
	    cin>>a>>b;
	    if(a<b) cout<<"No"<<endl;
	    else cout<<"YES"<<endl;
	}
	return 0;
}
