#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int c,n;
        cin>>c>>n;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        int k;
        for(int j=0;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(a[j]+a[k]==c){
                    cout<<j+1<<" "<<k+1<<endl;
                    break;
                }
            }
            if(k!=n)
                break;
        }
    }
}
