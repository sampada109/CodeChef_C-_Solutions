#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	for(int i; i<t; i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int ans = ((2*a) + (2*b)) * c;
	    cout<<ans<<endl;
	}

}
