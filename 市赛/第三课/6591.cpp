#include<bits/stdc++.h>
using namespace std;
map<string,string> m;
int main()
{
	int n;
	cin>>n;
	string str1,str2;
	cin>>str1>>str2;
	string str3,str4;
	for(int i=1;i<=n;i++)
	{
		cin>>str3>>str4;
		m[str4]=str3;
	}
	 string pre1=str1,cur1=str1;
	 string pre2=str2,cur2=str2;
	 int cnt1=0,cnt2=0;
	 int f=0;
	 do
	 {
	 	cnt2=0;
	 	cur2=str2;
	 	do
	 	{
	 		if(cur1==cur2)
	 		{
	 			f=1;
				break;	 			
			 }
			 pre2=cur2;
			 if(m.find(cur2)!=m.end())
			 {
				 cur2=m[cur2];
				 cnt2++;
			 }
		 }while(pre2!=cur2);
		 if(f==1)break;
		 pre1=cur1;
		 if(m.find(cur1)!=m.end())
		 {
		 	cur1=m[cur1];
		 	cnt1++;
		 }
	 }while(pre1!=cur1);
	 if(f==0)
	 {
	 	cout<<"NOT RELATED"<<endl;
	 }
	 else
	 {
	 	if(cnt1>=cnt2)
	 	{
	 		swap(cnt1,cnt2);
	 		swap(str1,str2);
		}
	 	if(cnt1==0)
	 	{
			 	cout<<str1<<" is the ";
			 	for(int i=1;i<=cnt2-cnt1-2;i++)
			 	cout<<"great-";
			 	if(cnt2>=2)
			 	cout<<"grand-";
			 	cout<<"mother of "<<str2;
	 	}
	 		if(cnt1==1)
	 		{
	 			if(cnt2==1)
	 			cout<<"SIBLINGS";
	 			else{
	 			cout<<str1<<" is the ";
	 			for(int i=1;i<=cnt2-cnt1-1;i++)
	 				cout<<"great-";
	 			cout<<"aunt of "<<str2;
	 			}
			 }
			 if(cnt1>=2)
			 cout<<"COUSINS";
	}
	 
  return 0;
}

