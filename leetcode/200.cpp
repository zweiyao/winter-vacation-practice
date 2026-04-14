#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    int fa[90005];
public:
    int find(int x)
    {
        if(x!=fa[x])return fa[x]=find(fa[x]);
        return x;
    }
    void join(int x,int y)
    {
        int f1=find(x);
        int f2=find(y);
        if(f1==f2)return ;
        else
            fa[f1]=f2;
    } 
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    fa[i*n+j]=i*n+j;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    if(i-1>=0 && grid[i-1][j]=='1')
                    {
                        int f1=find((i-1)*n+j);
                        int f2=find(i*n+j);
                        if(f1!=f2)
                        {
                            join((i-1)*n+j,i*n+j);
                            ans--;
                        }
                    }
                    if(j-1>=0 && grid[i][j-1]=='1')
                    {
                        int f1=find(i*n+j-1);
                        int f2=find(i*n+j);
                        if(f1!=f2)
                        {
                            join(i*n+j-1,i*n+j);
                            ans--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<char>> grid={{'1','1','0','0','0'},{'1','1','0','0','0'},{'0','0','1','0','0'},{'0','0','0','1','1'}};
    cout << s.numIslands(grid) << endl;
    return 0;
}