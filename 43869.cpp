#include<bits/stdc++.h>
using namespace std;
int a[5000050];
int n,k;
int partition(int* a,int low,int high)
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
void quick_sort(int* a,int low,int high)
{
	if(low<high)
	{
		int pivotpos=partition(a,low,high-1);
		if(pivotpos>k)
		quick_sort(a,low,pivotpos);
		else
		quick_sort(a,pivotpos+1,high);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quick_sort(a,0,n);
	cout<<a[k]<<endl; 
	return 0;
 } 
