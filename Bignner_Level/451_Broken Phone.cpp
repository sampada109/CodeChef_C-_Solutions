#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	
	for(int i=0; i<t; i++){
	    int r,n;
	    cin>>r>>n;
	    if(r<n) cout<<"REPAIR"<<endl;
	    else if(r>n) cout<<"NEW PHONE"<<endl;
	    else cout<<"ANY"<<endl;
	}

}
