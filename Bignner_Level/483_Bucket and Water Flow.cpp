#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    int res = a + (c*d);
	    
	    if(res>b) cout<<"overFlow"<<endl;
	    else if(res<b) cout<<"Unfilled"<<endl;
	    else cout<<"filled"<<endl;
	}

}
