#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int a[n],cnt=0;
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<n;j++)
            if(a[j]<=0)
                cnt++;
        if(cnt>=k)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;            

    }
}
