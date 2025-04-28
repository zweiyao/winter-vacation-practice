#include<bits/stdc++.h>
using namespace std;

bool isok(int a,int b) {
    if(max(a,b)==11&&abs(a-b)>=2||max(a,b)>=11&&abs(a-b)==2) return true;
    return false;
}
int as[10],bs[10];
void fpa() {
    for(int i=1;;i++) {
        if(bs[i]==11&&as[i]<=8) {
            as[i]++; 
            break;
        }
    }
}
void fpb() {
    for(int i=1;;i++) {
        if(as[i]==11&&bs[i]<=8) {
            bs[i]++; 
            break;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,d;
    cin>>a>>b;
    if(a>=b) {
        for(int i=1;i<=3;i++) as[i]=11;
        a-=33;
        d=3;
        while(b>=11&&d<=5) {
            d++;
            bs[d]=11;
            b-=11;
        }
        while(!isok(a,b)) {
            if(b>a-2) {
                b--;
                fpb();
            } else {
                a--;
                fpa();
            }
        }
        d++;
        as[d]=a;
        bs[d]=b;
        for(int i=1;i<=d;i++) cout<<as[i]<<':'<<bs[i]<<"\n";
        cout<<"4:"<<d-4;
    } else {
        for(int i=1;i<=3;i++) bs[i]=11;
        b-=33;
        d=3;
        while(a>=11&&d<=5) {
            d++;
            as[d]=11;
            a-=11;
        }
        while(!isok(a,b)) {
            if(a>b-2) {
                a--;
                fpa();
            } else {
                b--;
                fpb();
            }
        }
        d++;
        bs[d]=b;
        as[d]=a;
        for(int i=1;i<=d;i++) cout<<as[i]<<':'<<bs[i]<<"\n";
        cout<<d-4<<":4";
    }
    return 0;
}
