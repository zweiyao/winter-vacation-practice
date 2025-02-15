#include<iostream>
#include<string>
using namespace std;
string z,h;
void dg(int z1,int z2,int h1,int h2)
{
    if(z1>z2||h1>h2)return;
    int root=0;
    for(int i=z1;i<=z2;i++)
        {
            if(z[i]==h[h2])
               root=i; 
        }
    cout<<z[root];
    dg(z1,root-1,h1,h1+root-1-z1);
    dg(root+1,h2,h1+root-z1,h2-1);
}
int main()
{
    cin>>z>>h;
    dg(0,z.size()-1,0,h.size()-1);
    return 0;
}
