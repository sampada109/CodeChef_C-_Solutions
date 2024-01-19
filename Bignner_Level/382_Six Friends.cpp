#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	for(int i; i<t; i++){
	    int a,b;
	    cin>>a>>b;
	    
	    int ans = ((a*3) < (b*2)) ? a*3 : b*2;
	    
	    cout<<ans<<endl;
	}

}
