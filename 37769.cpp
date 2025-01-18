#include<bits/stdc++.h>
using namespace std;
int score[10000][2];

int main()
{
	memset(score,0,sizeof(score));
	char a;
	int left=0,right=0;//11分制left代表华华 ，right代表对手 
	int hua=0,dui=0;//21分制度hua代表华华，dui对代表对手 
	int count=0;
	
	while(cin>>a)       
	{
		if(a=='E')
			break;
		if(a=='W')
		{
			left++;hua++;
		}
		else if(a=='L')
		{
			right++;dui++;
		}
		if((left>=11||right>=11)&&abs(left-right)>=2)
		{
			cout<<left<<':'<<right<<endl;
			left=0;right=0;
		}
		if((hua>=21||dui>=21)&&abs(hua-dui)>=2)
		{
			score[count][0]=hua;
			score[count][1]=dui;
			count++;
			hua=0;dui=0;
		}
	}
		cout<<left<<':'<<right<<endl<<endl;
		score[count][0]=hua;
		score[count][1]=dui;

	//输出21分制的比分 
	for(int i=0;i<=count;i++)
	{
		cout<<score[i][0]<<":"<<score[i][1]<<endl;
	}
	return 0;
} 
