#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int flag=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%3==2&&i%5==3&&i%7==2)
			flag++;
	}
	
	cout<<flag<<endl;
	return 0;
}
