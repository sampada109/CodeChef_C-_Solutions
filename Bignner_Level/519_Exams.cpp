#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
	    
    	int sch, std, pas;
    	
    	cin >> sch >> std >> pas;
    	
    	int tt_std = sch * std;
    	
    	float pas_per = tt_std/2;
    	
    	if( pas > pas_per ){
    	    cout<<"YES"<<endl;
    	}
    	else{
    	    cout<<"NO"<<endl;
    	}
	    
	}
}
