#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
	    int a,b;
	    cin>>a>>b;
	    int ch = 2*a;
	    int cn = 5*b;
	    if(ch>cn) cout<<"Chocolate"<<endl;
	    else if(ch==cn) cout<<"Either"<<endl;
	    else cout<<"Candy"<<endl;
	}
	return 0;
}
