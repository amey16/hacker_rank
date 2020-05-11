#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int st=5,l,sum=0;
    for(int i=1;i<=n;i++){
        l=st/2;
        st=l*3;
        sum+=l;
    }
    cout<<sum<<endl;
}
