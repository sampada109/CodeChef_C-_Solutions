#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X;
	float Y;
	cin>>X>>Y;
	
	if(X<=2000 && Y<=2000)
   {
       if((X%5==0) && (Y-X-0.5>=0))
     {
       float total = Y-X-0.5;
       cout<<fixed<<setprecision(2)<<total<<"\n"; 
     }
       else
     {
        cout<<fixed<<setprecision(2)<<Y<<"\n";   
     }
       
   }
   else
    exit(0);

}
