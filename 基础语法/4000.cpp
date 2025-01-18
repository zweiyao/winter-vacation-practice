#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row_a,col_a,row_i,col_i;
	int max=INT_MIN,min=INT_MAX;
	int num=0;
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>num;
			if(num>max)
			{
				row_a=i;
				col_a=j;
				max=num;
			}
			if(num<min)
			{
				row_i=i;
				col_i=j;
				min=num;
			}
		}
	}
	cout<<max-min<<endl;
	cout<<row_a<<" "<<col_a<<endl;
	cout<<row_i<<" "<<col_i<<endl; 
	return 0;
}
