#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b && a>c) cout<<"Alice"<<endl;
	    else if(b>a && b>c) cout<<"Bob"<<endl;
	    else cout<<"Charlie"<<endl;
	}
	return 0;
}
