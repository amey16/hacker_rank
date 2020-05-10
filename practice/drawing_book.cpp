#include<iostream>
using namespace std;
int minu(int a,int b){
    if(a>b)
        return b;
    else 
        return a;    
}
int main(int argc,char** argv){
    int n,m;
    cin>>n;
    cin>>m;
    int cnt=0;
    int ts=(n+2)/2;
    int ptg=(m+2)/2-1;
    int ptgb=ts-ptg-1;
    cout<<minu(ptg,ptgb)<<endl;

}
