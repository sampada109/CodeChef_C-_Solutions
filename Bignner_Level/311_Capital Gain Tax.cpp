#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int p , n;
	
	cin >> p >> n;
	
	if( p < n ){
	    cout<<"INCREASED";
	}
	else if( p == n ){
	    cout<<"SAME";
	}
	else{
	    cout<<"DECREASED";
	}

}
