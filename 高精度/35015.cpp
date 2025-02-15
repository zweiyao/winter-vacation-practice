#include<bits/stdc++.h>
using namespace std;
int p,la=1;
int a[20000];
int main()
{
	cin >> p;
	a[0] = 1;
	for (int i = 1; i <= p; i++)
	{
		int jw = 0;
		for (int j = 0; j < la; j++)
		{
			a[j] =a[j]*2+jw;
			jw = a[j] / 10;
			a[j] = a[j] % 10;
		}
		if (jw){
			la++;
			a[la - 1] = jw;
		}
	}
	a[0]-=1;
    int count =0;
//    cout<<la<<endl;
	if (la < 500)
	{
		int cnt = 500 - la;
		while (cnt--)
		{
			
			cout << '0';
			count++;
			if(count==50)
			{
				count%=50;
				cout<<endl;
			}
		}
	}
	if(la<500)
	{
	for (int i = la-1; i >= 0; i--)
	{
		cout << a[i];
		count++;
		if(count==50)
			{
				count%=50;
				cout<<endl;
			}
	}
	}
	else{
	for(int i=499;i>=0;i--)
	{
		cout<<a[i];
		count++;
		if(count==50)
		{
			count%=50;
			cout<<endl;
		}
	}
	}
	return 0;
}
