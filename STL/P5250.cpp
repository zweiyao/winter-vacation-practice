#include<iostream>
#include<set>
using namespace std;
set<int> s;
int main()
{
    int n;
    cin>>n;
    int op,len;
    while(n--)
        {
            cin>>op>>len;
            if(op==1)
            {
            if(s.find(len)!=s.end())
                cout<<"Already Exist"<<endl;
            else
                s.insert(len);
            }
            else
            {
                if(s.empty())
                {cout<<"Empty"<<endl;continue;}
                if(s.find(len)!=s.end())
                {cout<<len<<endl;s.erase(len);}
                else
                {
                    set<int>::iterator it=s.lower_bound(len),pre=it;
                    if(it!=s.begin()) pre--;
                    if(it!=s.end())
                    {
                        int len1=(*it)-len;
                        int len2=len-(*pre); 
                        if(len1<len2){
                            cout<<(*it)<<endl;
                            s.erase(it);
                        }
                        else
                        {
                        cout<<(*pre)<<endl;
                        s.erase(pre);
						}
                    }
                    else
                    {
                        cout<<(*pre)<<endl;
                        s.erase(pre);
                    }
            }
         }
        }
    return 0;
}
