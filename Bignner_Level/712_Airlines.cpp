#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int a,b;
	    cin >> a >> b;
	    
	    int r = b/100;
	    
	    if( r >= a ){
	        if(b%100 != 0){
	            cout << (r-a)+1 << endl;
	        }
	        else{
	            cout << r-a << endl;
	        }
	    }
	    else{
	        cout << 0 << endl;
	    }
	}

}
