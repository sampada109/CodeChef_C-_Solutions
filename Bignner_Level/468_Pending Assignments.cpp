#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,m,d;
	    cin>>a>>m>>d;
	    int gt = a*m;
	    int tt = d*24*60;
	    
	    if(gt<=tt) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}
