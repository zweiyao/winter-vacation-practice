#include<bits/stdc++.h>
using namespace std;
long long cnt=0;
void swap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
void merge(vector<int>& a,int left,int mid,int right)
{
	vector<int> arrL(a.begin()+left,a.begin()+mid);
	vector<int> arrR(a.begin()+mid,a.begin()+right);
	int i=0,j=0,k=left;
	while(i<arrL.size()&&j<arrR.size())
	a[k++]=arrR[j]<arrL[i]?(cnt+=arrL.size()-i,arrR[j++]):arrL[i++];
	while(i<arrL.size())
	a[k++]=arrL[i++];
	while(j<arrR.size())
	a[k++]=arrR[j++];
}
void mergeSort(vector<int>& a,int left,int right)
{
	if(left+1<right)
	{
		int mid=left+(right-left)/2;
		mergeSort(a,left,mid);
		mergeSort(a,mid,right);
		merge(a,left,mid,right);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,x;
	cin>>n>>x;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergeSort(a,0,n);
	if(cnt-x>0)
	cout<<cnt-x<<" ";
	else
	cout<<0<<" ";
	return 0;
}
