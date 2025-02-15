#include<bits/stdc++.h>
using namespace std;
int n,t[100005],k[100005];
vector <vector<int> > x;
map<int,int> hah;
int main()
{
    int after=0;//表示从哪开始算国籍
    cin>>n;
    x.resize(n);
    for(int i=0;i<n;i++)
        {
            cin>>t[i];
            while(t[after]<=t[i]-86400){
                for(int z=0;z<k[after];z++)
                    {hah[x[after][z]]--;
                if(hah[x[after][z]]==0)
                    hah.erase(x[after][z]);}
                after++;}
            cin>>k[i];
            x[i].resize(k[i]);
            for(int j=0;j<k[i];j++)
                {
                    cin>>x[i][j];
                    hah[x[i][j]]++;
                }
            cout<<hah.size()<<endl;
        }
    return 0;
}
