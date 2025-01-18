#include<bits/stdc++.h>
using namespace std;
int main()
{
	int X,Y,Z;
	cin>>X>>Y>>Z; 
	if(X+Y==Z)
		cout<<X<<"+"<<Y<<"="<<Z<<endl;	
	else if(X-Y==Z)
		cout<<X<<"-"<<Y<<"="<<Z<<endl;
	else if(X*Y==Z)
		cout<<X<<"*"<<Y<<"="<<Z<<endl;	
	else
		cout<<X<<"/"<<Y<<"="<<Z<<endl;			
	return 0;
}
