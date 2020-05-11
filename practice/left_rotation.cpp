#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cout<<a[(i+k)%n]<<" ";
    cout<<endl;
}
