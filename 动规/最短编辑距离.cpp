#include<bits/stdc++.h>
using namespace std;
int f[205][205];
int main()
{
	string word1,word2;
	string s;
	cin>>s;
	word1=' '+s;
	cin>>s;
	word2=' '+s;
	memset(f,0x3f,sizeof(f));
	f[0][0]=0;
	for(int i=1;i<word2.size();i++)
		f[0][i]=i;
	for(int i=1;i<word1.size();i++)
		f[i][0]=i;	
	for(int i=1;i<word1.size();i++)
	{
		for(int j=1;j<word2.size();j++)
		{
			if(word1[i]==word2[j])
			f[i][j]=f[i-1][j-1];
			else
			{
			//ÐÞ¸Ä 
			f[i][j]=min(f[i][j],f[i-1][j-1]+1);
			//Ôö¼Ó 
			f[i][j]=min(f[i][j],f[i][j-1]+1);
			//É¾³ý
			f[i][j]=min(f[i][j],f[i-1][j]+1);	
			}	
		}	
	}
	cout<<f[word1.size()-1][word2.size()-1]<<endl;	
  return 0;
}

