#include<bits/stdc++.h>
using namespace std;
void swap(int* a,int x,int y)
{
	int temp;
	temp=a[x-1];
	a[x-1]=a[y-1];
	a[y-1]=temp;
}
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int x,y;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		swap(a,x,y);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	 } 
	return 0;
	
}
