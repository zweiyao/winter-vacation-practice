#include<bits/stdc++.h>
using namespace std;
string num1,num2,op;
bool a[100005],b[100005];
int main() {
	cin>>num1>>num2>>op;
	reverse(num1.begin(),num1.end());
	reverse(num2.begin(),num2.end());
	for(int i=0; i<num1.size(); i++) {
		a[i]=num1[i]-48;
	}
	for(int i=0; i<num2.size(); i++) {
		b[i]=num2[i]-48;
	}
	for(int i=0; i<max(num1.size(),num2.size());
	        i++) {
		if(op=="and")a[i]&=b[i];
		if(op=="or")a[i]|=b[i];
		if(op=="xor")a[i]^=b[i];
	}
	int la=max(num1.size(),num2.size());
	while(a[la-1]==0&&la>1)la--;
	for(int i=la-1;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
}

