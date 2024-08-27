#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	
	
	for(int i=0; i<t; i++){
	    
	    int n;
	    cin >> n;
	    
    	bool good = true;
	    
	    while(n--){
	        
	        int s;
	        cin >> s;
	        
	        if( s <= 4 ){
	            good = false;
	        }
	    }
	    
	    if(good){
	        cout << "YES" <<endl;
	    }
	    else{
	        cout << "NO" <<endl;
	    }
	}

}
