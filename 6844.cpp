#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[m+1];
	int index=-1;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];	
	}
	for(int i=0;i<m;i++)
	{
		if(a[i]>n)
		{
			index=i;
			break;
		}
	}
	if(index==-1)//忘记考虑找不到大于n的数 
	a[m]=n;
	else{
	for(int i=m;i>index;i--)
	{
		a[i]=a[i-1];
	}

	a[index]=n;
	}
	for(int i=0;i<m+1;i++)
	{
		cout<<a[i]<<" ";	
	}
	return 0;
}
