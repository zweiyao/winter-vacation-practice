#include<bits/stdc++.h>
using namespace std;
int a[100],len=1;
void calc()
{
	for(int i=1;i<=len;i++)
		a[i]*=2;
	a[1]+=2;
	for(int i=1;i<=len;i++)
	{
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	while(a[len+1]>0)
	{
		len++;
		a[len+1]+=a[len]/10;
		a[len]%=10; 
	}
}
int main()
{
	int n;
	cin>>n;
	len=1;
	a[1]=2;
	for(int i=2;i<=n;i++)
		calc();
	for(int i=len;i>=1;i--)
	cout<<a[i];
	return 0;
}
