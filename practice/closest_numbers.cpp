#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int dif=INT_MAX;
    for(int i=0;i<n-1;i++)
        if(dif>a[i+1]-a[i])
            dif=a[i+1]-a[i];
    for(int i=0;i<n-1;i++)
        if(a[i+1]-a[i]==dif)
            cout<<a[i]<<" "<<a[i+1]<<" ";
    cout<<endl;
}
