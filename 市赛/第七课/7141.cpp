#include<bits/stdc++.h>
using namespace std;
int main()
{
	int beg[5],end[5];
	cin>>beg[1]>>end[1];
	cin>>beg[2]>>end[2];
	cin>>beg[3]>>end[3];
	cin>>beg[4]>>end[4];
	int ans1,ans2,ans3;
	ans3=end[4]-beg[4];
	ans2=end[3]-beg[3]+ans3;
	ans1=end[2]-beg[2]+ans2;
	cout<<ans1<<endl<<ans2<<endl<<ans3<<endl;
	return 0;
 } 
