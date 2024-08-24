#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	
	cin >> n;
	
	while(n--){
	    
	    int a , m;
	    
	    cin >> a >> m;
	    
	    if( a < 50 ){
	        cout<<"Z"<<endl;
	    }
	    else if( a >= 50 && m < 50 ){
	        cout<<"F"<<endl;
	    }
	    else{
	        cout<<"A"<<endl;
	    }
	}

}
