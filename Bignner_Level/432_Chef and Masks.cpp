#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b;
	    cin>>a>>b;
	    int ct = b*10;
	    int dp = a*100;
	    if(ct<=dp) cout<<"Cloth"<<endl;
	    else cout<<"Disposable"<<endl;
	}

}
