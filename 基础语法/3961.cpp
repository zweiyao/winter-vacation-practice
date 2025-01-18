#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max,min,num;
	cin>>n;
	cin>>max;
	min=max;
	for(int i=1;i<n;i++)
		{
			cin>>num;
			if(num>max)
			max=num;
			if(num<min)
			min=num;
		}
		cout<<max<<endl<<min<<endl;
	return 0;
}
