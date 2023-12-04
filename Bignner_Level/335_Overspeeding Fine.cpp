#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int n;
	    cin>>n;
	    if(n<=70) cout<<"0"<<endl;
	    else if(n>70 && n<=100) cout<<"500"<<endl;
	    else cout<<"2000"<<endl;
	}
	return 0;
}
