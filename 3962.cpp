#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,flag=0;
	cin>>n;
	int max=0;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		if(temp>max)
		{
			max=temp;
			flag=i;
		}
	}
	cout<<flag<<endl;
	return 0;
} 
