#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int n;
	    cin>>n;
	    if(n>100) cout<<n-10<<endl;
	    else cout<<n<<endl;
	}
	return 0;
}
