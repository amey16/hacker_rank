#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int v,n;
    cin>>v;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,high=n-1;
    int mid;
    while(i<=high){
        mid=(i+high)/2;
        if(v==a[mid])
            break;
        else if(v>a[mid]){
            i=mid+1;
        }
        else
            high=mid-1;
    }
    cout<<mid<<endl;
}
