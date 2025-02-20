#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int m;
    cin>>m;
    int shi=0;
    for(int i=0;i<str.size();i++)
        {
            int tmp;
            if(str[i]>='0'&&str[i]<='9')
                tmp=str[i]-48;
            if(str[i]>='A'&&str[i]<='F')
                tmp=10+str[i]-'A';
            shi=shi*n+tmp;
        }
    //十进制转m进制
    int output[32];
    int l=0;
    while(shi>0)
        {
            output[l++]=shi%m;
            shi/=m;
        }
    for(int i=l-1;i>=0;i--)
        {
            if(output[i]<10)
            {
                cout<<output[i];
            }
            else
            {
                cout<<char(output[i]-10+'A');
            }
        }
    return 0;
}
