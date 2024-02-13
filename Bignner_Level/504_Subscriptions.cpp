#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b;
	    cin>>a>>b;
	    
	    if(a%6==0){
	        cout<<b*(a/6)<<endl;
	    }
	    else cout<<b*(a/6 + 1)<<endl;
	    
	}

}
