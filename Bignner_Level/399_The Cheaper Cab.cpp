#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b;
	    cin>>a>>b;
	    if(a<b) cout<<"FIRST"<<endl;
	    else if(a==b) cout<<"ANY"<<endl;
	    else cout<<"SECOND"<<endl;
	}

}
