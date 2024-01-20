#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    if(n<=3) cout<<"BRONZE"<<endl;
	    else if(n>3 && n<=6) cout<<"SILVER"<<endl;
	    else cout<<"GOLD"<<endl;
	}

}
