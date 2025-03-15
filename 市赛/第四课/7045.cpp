#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2;
	int a1,b1,a2,b2;
	cin>>x1>>y1>>x2>>y2;
	cin>>a1>>b1>>a2>>b2;
	//不相交 
	int x_l=max(x1,a1),x_r=min(x2,a2);
	int y_l=max(y1,b1),y_r=min(y2,b2);
	if(x_l>=x_r||y_l>=y_r)
	{
		cout<<(x2-x1)*(y2-y1)<<endl;
		return 0;
	}
	else//相交
	{
		if(x_r-x_l==x2-x1)
		{
			if(b1>y1&&b2<y2)
			{
				cout<<(x2-x1)*(y2-y1)<<endl;
				return 0;
			}
			else
			cout<<(x2-x1)*(y2-y1)-(x_r-x_l)*(y_r-y_l)<<endl;
		}
		else if(y_r-y_l==y2-y1)
		{
			if(a1>x1&&a2<x2)
			{
				cout<<(x2-x1)*(y2-y1)<<endl;
				return 0;
			}
			else
			cout<<(x2-x1)*(y2-y1)-(x_r-x_l)*(y_r-y_l)<<endl;
		}
		else
		cout<<(x2-x1)*(y2-y1)<<endl;
	} 
  return 0;
}

