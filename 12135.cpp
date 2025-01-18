#include<bits/stdc++.h>
using namespace std;
long long f[10005];
string str="1234567";
int dps(int n ,int i)//这个i就是刚好大于n的序号 
{
	
	if(n<=7) 
	{
		return n;
	}
	else if(n<=f[i-1])
	dps(n,i-1);
	else
	dps(n-f[i-1],i-2); 
}
int main()
{
	int n;
	cin>>n;
	int i;
	f[1]=4;
	f[2]=3;
	for(i=3;;i++)
	{
		f[i]=f[i-1]+f[i-2];
		if(f[i]>=n)
		break;
	}
	int wz=dps(n,i)-1;
	cout<<str[wz]<<endl;
	return 0;
}
