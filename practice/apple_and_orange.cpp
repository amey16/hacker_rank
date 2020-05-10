#include <iostream>
using namespace std;
int main(int argc,char** argv){
    int s,t,a,b,m,n;
    cin>>s;
    cin>>t;
    cin>>a>>b>>m>>n;
    int A[m],o[n];
    int cnt1=0,cnt2=0;
    for(int i=0;i<m;i++){
        cin>>A[i];
        if(A[i]+a>=s && A[i]+a<=t)
            cnt1++;
    }
    for(int i=0;i<n;i++){
        cin>>o[i];
        if(o[i]+b<=t && o[i]+b>=s)
            cnt2++;
    }
    cout<<cnt1<<endl;
    cout<<cnt2<<endl;
}
