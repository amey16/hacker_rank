#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc,char** argv){
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt=0;
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]-a[i]>t)
                break;
            if(a[j]-a[i]==t)
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
