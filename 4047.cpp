#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	int str[127];
	memset(str,0,sizeof(str));
	while(cin>>a)
	{
		if(a=='*')
		break;
		str[a]++;
	}	
	for(int i='A';i<='Z';i++)
		{
			if(str[i]>0)
			{
				cout<<(char)i<<":"<<str[i]<<endl;
			}
		}
	return 0;
}
