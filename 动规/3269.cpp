#include<bits/stdc++.h>
using namespace std;
struct qu{
	int left;
	int right;
};
struct qu a[1005];
int r[1005],f[1005];
bool cmp(struct qu a,struct qu b){
	if(a.right==b.right)
	return a.left<b.left;
	return a.right<b.right; 
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].left>>a[i].right;
	}
	sort(a+1,a+n+1,cmp);
	f[0]=0;	r[0]=0;
	f[1]=a[1].right-a[1].left+1;
	r[1]=a[1].right;
	for(int i=2;i<=n;i++)
	{
			f[i]=f[i-1];
			r[i]=r[i-1];
			for(int j=0;j<=i-1;j++)
			{
				if(r[j]<a[i].left&&(f[j]+a[i].right-a[i].left+1)>f[i])
				{
					r[i]=a[i].right;
					f[i]=f[j]+a[i].right-a[i].left+1;
				}
			}
	}
	cout<<f[n]<<endl;
  return 0;
}

