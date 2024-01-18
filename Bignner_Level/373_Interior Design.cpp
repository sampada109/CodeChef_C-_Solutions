#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    int first = a+b;
	    int second = c+d;
	    
	    int m = (first<second) ? first : second;
	    
	    cout<<m<<endl;
	}

}
