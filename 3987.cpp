#include<bits/stdc++.h>
using namespace std;
int main()
{
	long m,n;
	long temp;
	int i=1; 
	cin>>m>>n;
	if(m<n)//m·Å´óÊý 
	{
		temp=m;
		m=n;
		n=temp;
	}
	while(m*i%n!=0)
	{
		i++;		
	}
	cout<<m*i<<endl;
	return 0;
}
