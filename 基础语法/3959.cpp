#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int breath,pulse;
	cin>>n;
	string name[n];
	for(int i=0;i<n;i++)
		{
			cin>>name[i];
			cin>>breath>>pulse;
			if(breath<15||breath>20||pulse<50||pulse>70)
			{
				cout<<name[i]<<endl;
			}
		}
	return 0;
}
