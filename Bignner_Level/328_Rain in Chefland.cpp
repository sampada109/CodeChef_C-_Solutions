#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int n;
	    cin>>n;
	    if(n<3) cout<<"LIGHT"<<endl;
	    else if(n>=3 && n<7) cout<<"MODERATE"<<endl;
	    else cout<<"HEAVY"<<endl;
	}
	return 0;
}
