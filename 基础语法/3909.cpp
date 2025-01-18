#include<bits/stdc++.h>
using namespace std;
int main()
{
	int time=0;
	cin>>time;
	int h=time/3600;
	int m=(time-h*3600)/60;
	int s=time-h*3600-m*60;
	cout<<h<<':'<<m<<':'<<s<<endl;
	return 0;
}
