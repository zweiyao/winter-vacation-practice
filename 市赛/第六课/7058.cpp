#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string, int> f;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		string s;
		int num;
		cin >> s >> num;
		f[s] += num;
	}
	int minn = 1e9, secminn = 1e9;
	string ans;
	if (f.size()<7)
	{
		minn = 0;
	}
	//先确定次小值 
	for (auto it : f)
	{
		if (it.second<minn){
			secminn = minn;
			minn = it.second;
		}
		else if (it.second != minn&&it.second<secminn)secminn = it.second;
	}
	int sum = 0;
	for (auto it : f)
	{
		if (it.second == secminn)
		{
			sum++;
			ans = it.first;
		}
	}
	if (sum>1 || sum == 0)cout << "Tie" << endl;
	else cout << ans<<endl;
	return 0;
}

