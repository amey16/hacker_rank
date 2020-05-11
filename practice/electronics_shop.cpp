#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int b,k,u;
    cin>>b>>k>>u;
    int a[k],b1[u];
    for(int i=0;i<k;i++)
        cin>>a[i];
    for(int i=0;i<u;i++)
        cin>>b1[i];
    int max=-1;    
    for(int i=0;i<k;i++){
        for(int j=0;j<u;j++){
            if(a[i]+b1[j]>max && a[i]+b1[j]<=b)
                max=a[i]+b1[j];
        }
    }        
    cout<<max<<endl;
}

