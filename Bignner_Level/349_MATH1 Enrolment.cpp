#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int a,b;
	    cin>>a>>b;
	    if(a<b) cout<<b-a<<endl;
	    else cout<<0<<endl;
	}
}
