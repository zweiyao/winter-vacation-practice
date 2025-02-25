#include<bits/stdc++.h>
using namespace std;
#define MAXN 2000005
int a[MAXN];
int q[MAXN];
int main()
{
	int n,k;
	cin>>n>>k;
	int head=0,tail=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		while(head<tail&&q[head]+k<=i)
			head++;//去除过期元素
		while(head<tail&&a[q[tail-1]]<a[i])
			tail--;//淘汰队尾元素 
			q[tail]=i;
			tail++;
		if(i>=k)
			cout<<a[q[head]]<<endl;
	}
	return 0;
}

