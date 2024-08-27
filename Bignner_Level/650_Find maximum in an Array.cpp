#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    
	    int maxi = 0;
	    
	    while(n--){
	        int m;
	        cin >> m;
	        
	        maxi = max(m, maxi);
	    }
	    
    	cout << maxi << endl;
	}
	

}
