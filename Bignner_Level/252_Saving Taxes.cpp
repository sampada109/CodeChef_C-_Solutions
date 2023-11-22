#include <iostream>
using namespace std;

void result(int a,int b){
    int r = a-b;
    cout<<r<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int a,b;
	    cin>>a>>b;
	    result(a,b);
	}
	return 0;
}
