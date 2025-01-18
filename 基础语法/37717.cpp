#include<bits/stdc++.h>
using namespace std;
void print_zwy(string str,int left,int right)
{
	if(left>right)
	return ;
	int mid=(left+right)/2;
	cout<<str[mid];
	print_zwy(str,left,mid-1);
	print_zwy(str,mid+1,right);
	
}
int main()
{
	string str;
	cin>>str;
	int length=str.size();
	print_zwy(str,0,length-1);
	cout<<endl;
	return 0;
}
