#include<iostream>
#include<cstring>
using namespace std;
int g[30][30];
int outdegree[30],indegree[30];
int fa[30];
int find(int x)
{
    if(fa[x]==x)return x;
    else return fa[x]=find(fa[x]);
}
int hash_z[30];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<26;i++)fa[i]=i;
    int root;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int a=s[0]-'a',b=s[s.size()-1]-'a';
        g[a][b]=1;
        hash_z[a]++;
        hash_z[b]++;
        int f1=find(a),f2=find(b);
        if(f1!=f2)fa[f1]=f2;
        outdegree[a]++;
        indegree[b]++;
    }
    int s=0,t=0;
    for(int i=0;i<26;i++)
    {
        if(outdegree[i]!=indegree[i])
        {
            if(abs(outdegree[i]-indegree[i])!=1)
            {
                cout<<"The door cannot be opened."<<"\n";
                return 0;
            }
            else
            {
                if(outdegree[i]>indegree[i])
                {
                    if(s==1)
                    {
                        cout<<"The door cannot be opened."<<"\n";
                        return 0;
                    }
                    else
                    s=1;
                }
                else
                {   
                    if(t==1)
                    {
                        cout<<"The door cannot be opened."<<"\n";
                        return 0;
                    }
                    else t=1;
                }
            }
        }
    }
    int cnt=0;
    for(int i=0;i<26;i++)
    {
        if(fa[i]==i&&hash_z[i])
        {
            if(cnt==1)
            {
                cout<<"The door cannot be opened."<<"\n";
                return 0;
            }
            cnt++;
        }
    }
    cout<<"Ordering is possible."<<"\n";
    return 0;

}