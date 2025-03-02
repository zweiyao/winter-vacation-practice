#include<bits/stdc++.h>
using namespace std;
stack<int> stmin,stval;
int main()
{
	int n,s,num;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&s);
		if(s==1)
		{
			scanf("%d",&num);
			if(stmin.empty()||num<stmin.top())stmin.push(num);
			stval.push(num);			
		}
		if(s==2)
		{
			if(stval.top()==stmin.top())stmin.pop();
			stval.pop();
		}
		if(s==3)
		{
			cout<<stval.top()<<"\n";
		}
		if(s==4)
		{
			cout<<stmin.top()<<"\n";
		}
	 } 
  return 0;
}

