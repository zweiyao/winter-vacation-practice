#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int x,int y)
{
	int temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}
void sort_xz(int *a,int n)
{
	int index=0;
	for(int i=0;i<n;i++)
	{
		index=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[index])
			{
				index=j;
			}
		}
		swap(a,i,index);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort_xz(a,n);
	int sum=0;
	for(int i=n-1;i>=0;i--)
	{
		sum=sum*10+a[i];
	}
	cout<<sum<<endl;
	return 0;
}
