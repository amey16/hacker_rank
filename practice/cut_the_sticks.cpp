#include<iostream>
#include<climits>
using namespace std;
int minimum(int a[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min && a[i]!=0)
            min=a[i];
    } 
    return min;
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt=0,k;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            k=i;
        }    
    }
    while(a[k]!=0){
        int m=minimum(a,n);
        // cout<<m<<endl;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                a[i]=a[i]-m;
                cnt++;    
            }
        }
        cout<<cnt<<endl;
        cnt=0;
        // for(int i=0;i<n;i++)
        //     cout<<a[i]<<" ";
        // cout<<endl;        
    }
}
