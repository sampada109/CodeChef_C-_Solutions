#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int a,b,c , mx =0 , mn = 0;
	    cin>>a>>b>>c;
	    mx = max(max(a,b),c);
	    mn = min(min(a,b),c);
	    cout<<mx-mn<<endl;
	}
	return 0;
}
