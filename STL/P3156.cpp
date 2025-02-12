#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,m,tmp;
	cin>>n>>m;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		v.push_back(tmp);
	}
	for(int i=0;i<m;i++)
	{
		cin>>tmp;
		cout<<v[tmp-1]<<endl;
	}	
  return 0;
}

