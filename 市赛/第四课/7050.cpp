#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int n;
int ans=0;
int main()
{
	cin>>n;
	while(n--)
	{
		int x,y;
		cin>>x>>y;
		if(m.find(x)==m.end())
		{
			m[x]=y;	
		}	
		else
		{
			if(m[x]!=y){
			ans++;
			m[x]=y;
		}
	}
}
	cout<<ans<<endl;
  return 0;
}

