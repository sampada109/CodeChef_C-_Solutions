#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int m = (a*2) + b;
	int r = (c*2) + d;
	if(m==r) cout<<"Equal"<<endl;
	else if(m>r) cout<<"Messi"<<endl;
	else cout<<"Ronaldo"<<endl;
	return 0;
}
