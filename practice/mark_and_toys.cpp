#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc,char** argv){
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int cnt=0,sum=0;
    for(int i=0;i<n;i++){
        if(t-sum>a[i]){
            sum+=a[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
