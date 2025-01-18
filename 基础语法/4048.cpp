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
	int man[n];
	int woman[n];
	for(int i=0;i<n;i++)
	{
		cin>>man[i];
	}
	sort_xz(man,n);
	for(int i=0;i<n;i++)
	{
		cin>>woman[i];
	}
	sort_xz(woman,n);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=abs(man[i]-woman[i]);
	}
	cout<<sum<<endl;
	return 0;
}
