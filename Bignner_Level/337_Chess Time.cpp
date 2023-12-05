#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int n;
	    cin>>n;
	    int r = n*60;
	    cout<<r/20<<endl;            
	}
	return 0;
}
