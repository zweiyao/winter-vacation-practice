#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=2;i<=10000;i++)
	{
		int sum=0;
		//判断是否为完全数
		for(int j=1;j*j<=i;j++)
		{
			if(i%j==0)
			{
				if(j==1||j*j==i)
				sum+=j;
				else
				sum+=j+(i/j);
			}
		} 
		if(sum==i)
		cout<<setw(8)<<i;
	}
	cout<<endl;
	return 0;
	
}
