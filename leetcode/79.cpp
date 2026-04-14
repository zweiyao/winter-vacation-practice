#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
private:
    int vis[10][10];
    string a;
    int ans=0;
    int m=0;
    int n=0;
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
public:
    void dfs(vector<vector<char>>& board,string word,int x,int y,int depth)
    {
        a+=board[x][y];
        if(a==word)
        {
            ans=1;
            a.pop_back();
            return;
        }
        for(int i=0;i<4;i++)
        {
            int tx=x+dx[i];
            int ty=y+dy[i];
            if(tx>=0 && tx<m && ty>=0 && ty<n && vis[tx][ty]==0)
            {
                if(board[tx][ty]!=word[depth+1])
                    continue;
                vis[tx][ty]=1;
                dfs(board,word,tx,ty,depth+1);
                vis[tx][ty]=0;
            }
        }
        a.pop_back();
    }
    bool exist(vector<vector<char>>& board, string word) {
        ans=0;
        a.clear();
        m=board.size();
        n=board[0].size();
        memset(vis,0,sizeof(vis));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0])
                {
                    vis[i][j]=1;
                    dfs(board,word,i,j,0);
                    vis[i][j]=0;
                }
            }
        }
        if(ans==1)
        return true;
        else
        return false;
    }
};
int main()
{
    Solution s;
    vector<vector<char>> board={{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word="ABCCED";
    cout<<s.exist(board,word)<<endl;
    return 0;
}