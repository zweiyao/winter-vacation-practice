#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int x,int y)
{
	int temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=i+1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a,j,j+1);
				swap(b,j,j+1);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
