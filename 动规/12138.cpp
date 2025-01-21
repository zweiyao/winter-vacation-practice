#include<bits/stdc++.h> 
using namespace std;
double a[367],f[367][3];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	f[0][0] = 1000;
	f[0][1] = 0;
	for (int i = 1; i <= n; i++)
	{
		f[i][0] = f[i - 1][0] >= floor((f[i - 1][1] * a[i] *0.97)*100)/100 ? f[i - 1][0] : floor((f[i - 1][1] * a[i] *0.97)*100)/100;
		f[i][1] = f[i - 1][1] >= floor((f[i - 1][0] / a[i] *0.97)*100)/100 ? f[i - 1][1] : floor((f[i - 1][0] / a[i] *0.97)*100)/100;
	}
	cout << fixed <<setprecision(2) <<f[n][0] << endl;

	return 0;
}


