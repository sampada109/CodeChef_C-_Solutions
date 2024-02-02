#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int tt = 10*a;
	    
	    if(tt>=b) cout<<b*c<<endl;
	    else cout<<tt*c<<endl;
	}

}
