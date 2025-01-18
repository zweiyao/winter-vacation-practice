#include<bits/stdc++.h>
using namespace std;
void draw(int n,char a)
{
	for(int i=0;i<n;i++)
	{
		cout<<a;
	}
	cout<<endl;
}
int main()
{
	int n;
	int num;
	char a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		
		cin>>num>>a;
		draw(num,a);
	}
	return 0;
}
