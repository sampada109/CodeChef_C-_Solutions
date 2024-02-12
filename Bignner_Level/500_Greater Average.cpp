#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    float a,b,c;
	    cin>>a>>b>>c;
	    float res = (a+b)/2;
	    if(res > c) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}
