#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if((a+b)<c || (a+c)<b || (b+c)<a) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}

}
