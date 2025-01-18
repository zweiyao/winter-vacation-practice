#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& a,int left,int mid,int right)
{
	vector<int> arrL(a.begin()+left,a.begin()+mid);
	vector<int> arrR(a.begin()+mid,a.begin()+right);
	int i=0,j=0,k=left;
	while(i<arrL.size()&&j<arrR.size())
	a[k++]=arrR[j]<arrL[i]?arrR[j++]:arrL[i++];
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
int partition(vector<int>& a,int low,int high)
{
	int pivot=a[low];
	while(low<high)
	{
		while(low<high&&a[high]>=pivot)
		high--;
		a[low]=a[high];
		while(low<high&&a[low]<=pivot)
		low++;
		a[high]=a[low];
	}
	a[low]=pivot;
	return low;
}
void quick_sort(vector<int>& a,int low,int high)
{
	if(low<high)
	{
		int pivotpos=partition(a,low,high-1);
		quick_sort(a,low,pivotpos);
		quick_sort(a,pivotpos+1,high);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	mergeSort(a,0,n);
	quick_sort(a,0,n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
