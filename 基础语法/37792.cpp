#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int num[100005];
int main()
{
	int n,nums;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		for(int j=0;j<num[i];j++)
		{
			cin>>nums;
			a.push_back(nums);
		}
	}
	int max=INT_MIN;
	int index=-1;
	int sun;
	int x=-1;//记录上次到提取的位置 
	for(int i=0;i<n;i++)
	{
		sun=0;
		for(int j=1;j<=num[i];j++)
		{
			x++;//依次往后读儿子序号 
			sun+=num[a[x]-1];
		}
		if(sun>max)
		{
			index=i+1;
			max=sun;
		}
	}
	cout<<index<<" "<<max<<endl;
	return 0;
}
