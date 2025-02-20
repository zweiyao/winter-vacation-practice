#include<iostream>
#include<algorithm>
using namespace std;
int t[605];//Í° 
int peo = 0;/*×ÜÈËÊý*/
int main()
{
	int n, w;
	cin >> n >> w;
	for (int i = 1; i <= n; i++)
	{
		int tmp, winer;
		cin >> tmp;
		t[tmp]++;
		peo++;
		winer = max(1, (int)(peo*w*0.01));
		int pos = 0;
		for (int j = 600; j >= 0; j--)
		{
			pos += t[j];
			if (pos >= winer)
			{
				cout << j << " ";
				break;
			}
		}
	}
	return 0;
}

