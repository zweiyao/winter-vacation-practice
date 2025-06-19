#include<bits/stdc++.h>
using namespace std;
int a[45],b[45];
vector<pair<int,int> >v;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
		}
		v.clear();
		for(int i=1;i<=n;i++)
		{
			if(a[i]>b[i])
			{
				v.push_back({3,i});	
				int tmp=a[i];
				a[i]=b[i];
				b[i]=tmp;
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n-i;j++)
			{
				if(a[j]>a[j+1])
				{
					int tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
					v.push_back({1,j});
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n-i;j++)
			{
				if(b[j]>b[j+1])
				{
					int tmp=b[j];
					b[j]=b[j+1];
					b[j+1]=tmp;
					v.push_back({1,j});
				}
			}
		}
		cout<<v.size()<<"\n";
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<"\n";
		}
	}
	return 0;
}

