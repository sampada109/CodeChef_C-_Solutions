#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
	// your code goes here
	
	int cal = a + b + (a*b);
	
	if(cal==111) cout<<"Yes"<<endl;\
	else cout<<"No"<<endl;
	
	return 0;
}
