#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b;
	    cin>>a>>b;
	    
	    int alice = 7-a;
	    int bob = 7-b;
	    
	    int m = (alice<bob) ? alice : bob;
	    
	    cout<<m<<endl;
	}

}
