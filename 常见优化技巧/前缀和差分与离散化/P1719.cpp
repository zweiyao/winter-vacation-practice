#include<bits/stdc++.h>
using namespace std;
int a[125][125];
int maxn=INT_MIN;
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>a[i][j];
			a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+a[i][j];
		}
	}
	for(int x_1=1; x_1<=n; x_1++) {
		for(int y_1=1; y_1<=n; y_1++) {
			for(int x_2=x_1; x_2<=n; x_2++) {
				for(int y_2=y_1; y_2<=n; y_2++) {
					maxn=max(maxn,a[x_2][y_2]+a[x_1-1][y_1-1]-a[x_2][y_1-1]-a[x_1-1][y_2]); 
				}
			}
		}
	}
	cout<<maxn<<endl;
	return 0;
}
