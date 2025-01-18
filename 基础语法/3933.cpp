#include<bits/stdc++.h>
using namespace std;
int main()
{
	int month[2],date[2];
	cin>>month[0]>>date[0];
	cin>>month[1]>>date[1];
	if(month[0]>month[1])
		cout<<"Lele"<<endl;
	else if(month[0]<month[1])
		cout<<"Taotao"<<endl;
	else
	{
		if(date[0]<date[1])
			cout<<"Taotao"<<endl;
		else if(date[0]>date[1])
			cout<<"Lele"<<endl;
		else
			cout<<"as old as"<<endl;	
	}
	return 0;
}
