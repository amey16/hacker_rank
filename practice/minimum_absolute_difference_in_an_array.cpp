#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int min=INT_MAX;
    for(int i=0;i<n-1;i++)
        if(a[i+1]-a[i]<min)
            min=a[i+1]-a[i];
    cout<<min<<endl;
}