#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    
	    int rem = n%10;
	    
	    while(n>9){
	        n = n/10;
	    }
	    
	    cout<<rem+n<<endl;
	    
	}
	
}
