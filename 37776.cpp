#include<bits/stdc++.h>
using namespace std;
int shan[250];//表示删除的数 
int main()
{
	string s;
	int n=s.size();
	int k,x=0;
	cin>>s>>k;
	char pre=s[0],cur;
	for(int i=1;i<=k;i++)
	{
	//找到递减首元素 
		x=s.size()-1;//如数组单调则删最后的 
		for(int j=0;j<s.size()-1;j++)
		{
			if(s[j]>s[j+1])
			{
				x=j;
				break;
			}
		} 
		s.erase(x,1);
	}
	//删除前面的0 
	while((s.size()>=1)&&s[0]=='0')
	s.erase(0,1); 
	cout<<s<<endl;
	return 0;
} 
