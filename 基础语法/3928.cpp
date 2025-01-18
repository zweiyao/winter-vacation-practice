#include<bits/stdc++.h>
using namespace std;
int main()
{
	int grade;
	cin>>grade;
	if(grade<60)
	{
		cout<<"BAD"<<endl;
	}
	else if(grade>=60&&grade<=85)
		cout<<"GOOD"<<endl;
	else
		cout<<"VERY GOOD"<<endl;
	
	return 0;
}
