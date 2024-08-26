#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
	    
	    int l,b,m;
	    
	    cin >> l >> b >> m;
	    
	    int area = l*b;
	    int area_cost = 2 * area;
	    
	    int wall = m / area_cost;
	    
	    cout << wall << endl;
	}

}
