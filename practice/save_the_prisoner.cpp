#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m,s;
        cin>>n>>m>>s;
        int p=(s+m-1)%n;
        if(p==0)
            p=n;
        cout<<p<<endl;
    }
}