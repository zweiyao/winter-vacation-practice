#include<bits/stdc++.h>
using namespace std;
char str[55];
vector<int> a[30];
int main()
{
	for(int i=1;i<=52;i++)
	{
		cin>>str[i];
		a[str[i]-65].push_back(i);
	}
	int ans=0;
	for(int i=0;i<25;i++)
	{
		for(int j=i+1;j<=25;j++)
		{
			int x1=a[i][0];
			int x2=a[i][1];
			int y1=a[j][0];
			int y2=a[j][1];
			//ÅÐÖØºÏ 
			if(max(x1,y1)<min(x2,y2))
			{
				//ÅÐ½»²æ
				if((x1<y1&&x2<y2)||(x1>y1&&x2>y2))
				ans++; 
			}
		}
	}
	cout<<ans<<endl;
  return 0;
}

