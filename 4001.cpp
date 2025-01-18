#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0,x=0,count=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		int temp=i;
		while(temp>0)
		{
			if(temp%10==x)
			count++;
			temp=temp/10;
		}
	}
	cout<<count<<endl;
	return 0;
	
}
