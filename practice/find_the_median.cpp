#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    float median;
    if(n%2==1)
        cout<<a[n/2]<<endl;
    else{
        median=(a[n/2]+a[n/2-1])/2;
        cout<<median<<endl;
    }
}
