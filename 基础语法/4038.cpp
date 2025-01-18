#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int b[n];
	int k=0;
	while(n>0)
	{	
		b[k]=n%8;
		k++;
		n=n/8; 
	}
	for(int i=k-1;i>=0;i--)
	{	
		cout<<b[i];
	}
	cout<<endl;
	return 0;
	
}
