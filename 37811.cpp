#include<bits/stdc++.h>
using namespace std;
priority_queue< int,vector<int>,greater<int> > q;
int main()
{
	int n,num,num1,num2,sum,ret=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		q.push(num);
	}
	for(int i=1;i<=n-1;i++)
	{
		num1=q.top();
		q.pop();
		num2=q.top();
		q.pop();
		sum=num1+num2;
		ret+=sum;
		q.push(sum);
	}
	cout<<ret<<endl;
	return 0;
}
