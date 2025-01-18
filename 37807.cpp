#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<string,int> a;
	string str;
	int max=INT_MIN;
    string str_max;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		a[str]++;
		if(a[str]>max)
		{
			max=a[str];
			str_max=str;
		}
	}
	cout<<str_max<<endl;
	return 0;
}
