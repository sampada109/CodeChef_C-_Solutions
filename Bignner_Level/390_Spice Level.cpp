#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	for(int i; i<t; i++){
	    int n;
	    cin>>n;
	    if(n>=7) cout<<"HOT"<<endl;
	    else if(n>=4 && n<7) cout<<"MEDIUM"<<endl;
	    else cout<<"MILD"<<endl;
	}

}
