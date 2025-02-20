#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	while(b!=0)
	{
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<gcd(abs(x1-x2),abs(y1-y2))+1<<endl;
  return 0;
}

