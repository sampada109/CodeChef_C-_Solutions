#include <iostream>
using namespace std;

void result(int a, int b){
    if((a+b)>6){
	    cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}

int main() {
    int t;
    cin>>t;
    for(int k=0; k<t; k++){
	int a,b ;
	cin>>a>>b;
    result(a,b);    
    }
	
	return 0;
}
