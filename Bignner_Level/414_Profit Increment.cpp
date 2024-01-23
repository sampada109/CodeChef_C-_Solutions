#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b;
	    cin>>a>>b;
	    
	    int bp = a-b;
	    int sp = a + (a*0.1);
	    
	    int pf = sp-bp;
	    
	    cout<<pf<<endl;
	}

}
