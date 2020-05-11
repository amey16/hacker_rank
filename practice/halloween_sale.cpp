#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int p,d,m,s;
    cin>>p>>d>>m>>s;
    int cnt=0;
    while(s-p>=0){
        cnt++;
        s-=p;
        if(p-d>=m)
            p-=d;
        else
            p=m;    
    }
    cout<<cnt<<endl;
}
