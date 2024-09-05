#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int amount, friends;
	    cin >> amount >> friends;
	    
	    int repair = amount/(friends+1);
	    
	    cout << amount - (friends*repair) << endl;
	    
	}

}
