#include<iostream>
using namespace std;
int main(int argc,char ** argv){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int min=a[0],max=a[0];
    for(int i=0;i<n;i++){
        b[i]=max;
        if(a[i+1]>max && i!=n-1){
            max=a[i+1];
        }
    }  
    for(int i=0;i<n;i++){
        c[i]=min;
        if(a[i+1]<min && i!=n-1){
            min=a[i+1];
        }
    }
    int cnt1=0,cnt2=0;
    for(int i=0;i<n-1;i++){
        if(b[i+1]!=b[i])
            cnt1++;
        if(c[i+1]!=c[i])
            cnt2++;    
    }
    cout<<cnt1<<" "<<cnt2<<endl;
}
