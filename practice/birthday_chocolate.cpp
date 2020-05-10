#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int d,m;
    cin>>d>>m;
    int cnt=0,sum=0;
    for(int i=0;i<n-m+1;i++){
        for(int j=0;j<m;j++)
            sum+=a[i+j];
        if(sum==d)
            cnt++;
        sum=0;
    }
    cout<<cnt;
}
