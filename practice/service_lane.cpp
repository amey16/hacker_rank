#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int si,ei;
    int min=0,l;
    for(int i=0;i<n;i++){
        if(min<a[i]){
            min=a[i];
            l=i;
        }    
    }        
    for(int i=0;i<k;i++){
        cin>>si>>ei;
        for(int j=si;j<=ei;j++){
            if(min>a[j])
                min=a[j];
        }
        cout<<min<<endl;
        min=a[l];
    }    
}
