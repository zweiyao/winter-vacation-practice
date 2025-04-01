#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	int x_1=min(x1,x3);
	int y_1=min(y1,y3);
	int x_2=max(x2,x4);
	int y_2=max(y2,y4);
	int x=x_2-x_1;
	int y=y_2-y_1;
	cout<<max(x,y)*max(x,y)<<endl;
  return 0;
}

