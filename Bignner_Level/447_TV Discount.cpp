#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int f,s,df,ds;
	    cin>>f>>s>>df>>ds;
	    
	    int cf = f-df;
	    int cs = s-ds;
	    
	    if(cf<cs) cout<<"First"<<endl;
	    else if(cf>cs) cout<<"Second"<<endl;
	    else cout<<"Any"<<endl;
	}

}
