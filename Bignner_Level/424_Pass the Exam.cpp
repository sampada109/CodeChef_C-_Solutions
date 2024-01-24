#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int sum = a+b+c;
	    if(sum>=100 && a>=10 && b>=10 && c>=10) cout<<"PASS"<<endl;
	    else cout<<"FAIL"<<endl;
	}

}
