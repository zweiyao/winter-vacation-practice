#include<bits/stdc++.h> 
const int inf = 0x3f3f3f3f;
using namespace std;
string s;
string word[105];
int f[105];
int n;
void init(){
	cin >> s;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> word[i];
	}
	memset(f, inf, sizeof(f));
}
int main(){
	init();
	f[0] = 0;
	for (int i = 0; i<s.size(); i++){
		for (int j = 1; j <= n; j++){
			if (i + 1 >= word[j].size()){
				string z1 = s.substr(i - word[j].size() + 1, word[j].size());
				if (z1 == word[j]){
					f[i + 1] = min(f[i + 1], f[i - word[j].size() + 1] + 1);
				}
			}
		}
	}
	cout << f[s.size()] << endl;
	return 0;
}
