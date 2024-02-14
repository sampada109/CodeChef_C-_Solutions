#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    float p,l;
	    cin>>p>>l;
	    
	    if((l/p) >= 0.75) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}
