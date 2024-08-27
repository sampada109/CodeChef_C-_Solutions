#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	
	cin >> t;
	
	int mini, maxi;
	
	for(int i=0; i<t; i++){
	    
	    int n;
	    cin >> n;
	    
	    if( n%2 == 0 ){
	        mini = n/2;
	    }
	    else{
	        mini = n/2 + 1;
	    }
	    
	    maxi = n;
	    
	    
	    cout << mini << " " << maxi << endl;
	}

}
