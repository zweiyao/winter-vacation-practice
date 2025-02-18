#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main()
{
	int n;
	cin>>n;
	if(n<=4)
	{
		if(n<=2)
		cout<<"0"<<endl;
		else if(n==3)
		cout<<"2"<<endl;
		else
		cout<<"3"<<endl;
		return 0;
	}
	else
	{
		int s=2;
		while(n>=s)
		{
		a.push_back(s);
		n-=s;
		s++;
		}
		int k=n;//n>=0
		int ans=1;
		if(n==0)
		{
		for(int i=0;i<a.size();i++)
		{
			ans*=a[i];
		}
		cout<<ans<<endl;
		return 0;
		}
		for(int i=a.size()-1;i>=0;i--)
		{
			a[i]++;
			k--;
			if(k==0)break;
		}
	
		for(int i=0;i<a.size();i++)
		{
			ans*=a[i];
		}
		cout<<ans<<endl;
	}
  return 0;
}

