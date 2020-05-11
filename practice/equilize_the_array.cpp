#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int a[100];
    for(int i=0;i<100;i++)
        a[i]=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        a[arr[i]-1]++;
    }
    int max=0;
    for(int i=0;i<100;i++)
        if(max<a[i])
            max=a[i];
    cout<<n-max<<endl;
}
