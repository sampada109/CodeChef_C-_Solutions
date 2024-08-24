#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int l , w , h , s;
	
	cin >> l >> w >> h >> s;
	
	int cbd = l*w*h;
	
	int cb = pow(s,3);
	
	if( cbd > cb ){
	    cout<<"Cuboid";
	}
	else if( cbd == cb ){
	    cout<<"Equal";
	}
	else{
	    cout<<"Cube";
	}

}
