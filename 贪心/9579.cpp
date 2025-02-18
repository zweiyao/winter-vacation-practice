#include<bits/stdc++.h>
using namespace std;
int main()
{
	int M,S,T;
	cin>>M>>S>>T;
	int t=0,s=0;//初始时间 
	while(t<T)
	{
		//初始能量够，直接闪烁 
		if(M>=10)
		{
			M-=10;
			s+=60;
			t++;
			if(s>=S)
			{
				cout<<"Yes"<<endl<<t<<endl;
				break;
			}
			continue;
		}
		//跑//时间不够闪//距离剩的很少时，跑比恢复闪快 
		if(T-t<1+ceil((10-M)/4.0)) 
		{
			s+=(T-t)*17;
			t=T;
			if(s>=S)
			{
				t=T-(s-S)/17;
				cout<<"Yes"<<endl<<t<<endl;
				break;
			}
			else
			{
				cout<<"No"<<endl<<s<<endl;
				return 0;
			}
		}
		//闪 
		else//时间够 
		{
			//别闪 
			 if(M<=1){//恢复要3秒 如果3+1则不如跑步，5+2比跑步优 
			 if(s+6*17>=S)
			 {
			 t+=ceil((S-s)/17.0);
			 cout<<"Yes"<<endl<<t<<endl;
			 return 0;
			 }
			 }
			 if(M>=2&&M<=5)
			 {
			 	if(s+2*17>=S)
			 	{
			 		t+=ceil((S-s)/17.0);
			 		cout<<"Yes"<<endl<<t<<endl;
			 		return 0;
				 }
			 }
			 if(M>=6&&M<=9)
			 {
			 	if(s+17>=S)
			 	{
			 		t+=ceil((S-s)/17.0);
			 		cout<<"Yes"<<endl<<t<<endl;
			 		return 0;
				 }
			 }
			 //可以闪 
			t+=1+ceil((10-M)/4.0);
			s+=60;
			M=M+4*ceil((10-M)/4.0)-10;
			if(s>=S)
			{
				cout<<"Yes"<<endl<<t<<endl;
				break;
			}
		}
	}
	if(t>=T&&s<S)cout<<"No"<<endl<<s<<endl;
  return 0;
}

