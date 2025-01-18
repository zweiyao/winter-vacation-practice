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
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int wz=1;
	for(int i=0;i<n;i++)
	{	int wz=1;
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[i])
			wz++;
		}
		b[i]=wz;
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<' ';
	}
	cout<<endl;
	return 0;
	
}
