#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		a.push_back(i+1);
	}
//	int count=0,kill=0;
//	while(kill<n-1){
//		for(int i=0;i<n;i++)
//		{
//			if(a[i]==0)
//			count++;
//			if(count==m)
//			{
//				a[i]=1;
//				count=0;
//				kill++;
//			}
//			if(kill==n-1)
//			break;
//		}
	// 
//	}
	//数组模拟时间复杂度太高，直接删除 
	int t=0; 
	while(a.size()>1)
	{
		t+=m-1;
		t=t%a.size();//t可能会超过数组大小
		a.erase(a.begin()+t); 
	}
	cout<<a[0]<<endl;
}
