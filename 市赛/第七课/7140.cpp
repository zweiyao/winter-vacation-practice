#include<bits/stdc++.h>
using namespace std;
int n;
int a[5005][5005];
int main()
{
	cin>>n;
	int t=0;
	int x=2500,y=2500;	
	a[x][y]=t;
	int k=1e9;
	for(int i=1;i<=n;i++)
	{
		char ch;
		int num;
		cin>>ch;
		cin>>num;
		if(ch=='N')
		{
		while(num--)
		{
			t++;
			y++;
			if(a[x][y]!=0){
				k=min(k,t-a[x][y]); 
			}
			a[x][y]=t;
		}
		}
		else if(ch=='E')
		{
			while(num--)
			{
				t++;
				x++;
				if(a[x][y]!=0){
				k=min(k,t-a[x][y]); 
			}
				a[x][y]=t;
			}
		}
		else if(ch=='S')
		{
			while(num--)
			{
				t++;
				y--;
				if(a[x][y]!=0){
				k=min(k,t-a[x][y]); 
			}
				a[x][y]=t;
			}
		}
		else
		{
			while(num--)
			{
				t++;
				x--;
				if(a[x][y]!=0){
				k=min(k,t-a[x][y]); 
			}
				a[x][y]=t;
			}
		}
	}
	if(k==1e9){cout<<"-1"<<endl;return 0;
	}
	cout<<k<<endl;
  return 0;
}

