#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b;
	    cin>>a>>b;
	    if(b<=(1.07*a)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}
