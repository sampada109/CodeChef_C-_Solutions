#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int r,p,m;
	    cin>>r>>p>>m;
	    
	    if((r*m)<p) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}
