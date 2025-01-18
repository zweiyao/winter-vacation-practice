#include<bits/stdc++.h>
using namespace std;
int a[10000005];
int n,x,y,z;
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
		if(pivotpos>n/2)
		quick_sort(a,low,pivotpos);
		else
		quick_sort(a,pivotpos+1,high);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>x>>y>>z;
	a[0]=x;
	for(int i=1;i<n;i++)
	{
		a[i]=((long long)(a[i-1]*y+z))%1000000007;
	}
	quick_sort(a,0,n);
	cout<<a[n/2]<<endl; 
	return 0;
 } 
