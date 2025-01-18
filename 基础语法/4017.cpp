#include<bits/stdc++.h>
using namespace std;
void draw(int n)
{
	int count=1;
	for(int i=1;i<=n;i++)
	{
		count=1;
		for(int j=1;j<=i;j++)
		{	for(int k=1;k<=i;k++)
				{
				cout<<setw(3)<<count;
				count++;
				}
				cout<<endl;
		}
		count++;
	}
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	draw(n);
	return 0;
}
