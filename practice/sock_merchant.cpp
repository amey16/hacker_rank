#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt=1,ans=0,k=0;    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cnt++;
                a[j]=k;
                k--;
            }    
        }
        cnt=cnt/2;
        //cout<<cnt<<" ";
        ans+=cnt;
        //cout<<ans<<" ";
        cnt=1;
    }
    //cout<<endl;
    cout<<ans<<endl;    
}
