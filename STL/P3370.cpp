#include<iostream>
#include<string>
#include<vector>
using namespace std;
#define mod 250000
vector<pair<int,int> >linker[mod + 2];
int ans = 0;
inline int gethash(string str1, string str2)
{//保证hash值不会重复，唯一代表字符串
	return (str1[0] - 'A') + (str1[1] - 'A') * 26 + (str2[0] - 'A') * 26 * 26 + (str2[1] - 'A') * 26 * 26 * 26;
}
inline int find(int x)
{
	for (int i = 0; i < linker[x%mod].size(); i++)
	{
		if (linker[x%mod][i].first == x)
			return linker[x%mod][i].second;//找出hash==x的出现次数
	}	
	return 0; 

}
void insert(int x)
{
	for (int i = 0; i < linker[x%mod].size(); i++)
	{
		if (linker[x%mod][i].first == x)
		{
			linker[x%mod][i].second++;
			return;
		}
	}
	linker[x%mod].push_back(pair<int, int>(x, 1));//新加入
}
int main()
{
	int n;
	cin >> n;
	string str1;
	string str2;
	while (n--)
	{
		cin >> str1 >> str2;
		//剪枝市名与州名相同的情况
		if (str1[0] != str2[0] || str1[1] != str2[1])
			ans += find(gethash(str2, str1));
		insert(gethash(str1,str2));
	}
	cout << ans << endl;
	return 0;
}
