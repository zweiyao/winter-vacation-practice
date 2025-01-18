#include<bits/stdc++.h>
using namespace std;
void swap(string *a,int x,int y)
{
	string temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}
void sort_xz(string *a,int n)
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
	string a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort_xz(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<" "<<a[i]<<endl;
	}
	return 0;
}
