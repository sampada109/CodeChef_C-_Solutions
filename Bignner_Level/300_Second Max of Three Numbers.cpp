#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a>b && a<c) || (a<b && a>c)){
	        cout<<a<<endl;
	    }
	    else if((b>a && b<c) || (b<a && b>c)){
	        cout<<b<<endl;
	    }
	    else cout<<c<<endl;
	}
	return 0;
}
