#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int a,g,p,m;
	    cin>>a>>g>>p>>m;
	    
	    int tt = a + (g-p)*m;
	    
	    cout<<tt<<endl;
	}
}
