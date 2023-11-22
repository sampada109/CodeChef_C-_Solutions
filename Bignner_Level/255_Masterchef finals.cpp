#include <iostream>
using namespace std;

void result(int n){
    if(n<=10) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int n;
	    cin>>n;
	    result(n);
	}
	return 0;
}
