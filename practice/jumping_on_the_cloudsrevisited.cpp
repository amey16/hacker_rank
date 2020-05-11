#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int b=0;
    int e=100;
    while(b!=n){
        if(a[b]==1)
            e-=3;
        else
            e-=1;
        b+=m;
        if(b>n)
            b=b%n;        
    }    
    if(e<=0)
        cout<<"0"<<endl;
    else
        cout<<e<<endl;    
}
