#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[2];
	cin>>str;
	char qa=str[0]-1;
	char ha=str[0]+1;
	char qb=str[1]-1;
	char hb=str[1]+1;
	cout<<str[0]<<":"<<(int)str[0]<<" qianqu:"<<qa<<" houji:"<<ha<<endl;
	cout<<str[1]<<":"<<(int)str[1]<<" qianqu:"<<qb<<" houji:"<<hb<<endl;
	return 0;
}
