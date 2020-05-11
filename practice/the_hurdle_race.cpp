#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n,k;
    cin>>n>>k;
    int a[n];
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }   
    if(k>max)
        cout<<"0"<<endl;
    else
        cout<<max-k<<endl;
}
