#include<iostream>
using namespace std;
int n;
int a[500005];
int tmp[500005];
long long ans=0;
void merge_sort(int l,int r)
{
    if(r==l) return;
    int mid=(r+l)>>1;
    merge_sort(l,mid);
    merge_sort(mid+1,r);
    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=r)
        {
            if(a[i]<=a[j]){tmp[k++]=a[i];i++;ans+=j-mid-1;}
            else {tmp[k++]=a[j];j++;}
        }
    while(i<=mid){tmp[k++]=a[i];i++;ans+=j-mid-1;}
    while(j<=r){tmp[k++]=a[j];j++;}
    for(int i=l;i<=r;i++)
        {
            a[i]=tmp[i];
        }
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
    merge_sort(1,n);
	cout<<ans;
    return 0;
}
