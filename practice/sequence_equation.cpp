#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int b[n];    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]==i+1)
                b[a[i]-1]=j+1;
        }       
    }    
    for(int i=0;i<n;i++)
        cout<<b[i]<<endl;
}
