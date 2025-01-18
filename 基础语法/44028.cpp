#include<bits/stdc++.h>
using namespace std;
void heap_sort(vector<int>& arr)
{
	priority_queue<int,vector<int>,greater<int> > maxHeap;
	for(int i=0;i<arr.size();i++)
	{
		maxHeap.push(arr[i]);
	}
	for(int i=0;i<arr.size();i++)
	{
		arr[i]=maxHeap.top();
		maxHeap.pop();
	}
}
int main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	priority_queue<int,vector<int>,greater<int> > minHeap;
	int n,op,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>op;
		if(op==1)
		{
			cin>>x;
			minHeap.push(x);
		}
		else if(op==2)
		{
			cout<<minHeap.top()<<endl;
		}
		else if(op==3)
		{
			maxHeap.pop();
		}
	}
	
	return 0;
}
