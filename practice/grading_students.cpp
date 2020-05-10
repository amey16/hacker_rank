#include<iostream>
using namespace std;
int round(int a){
    if(a<38)
        return a;
    else{
        if(a%5>2)
            return a+5-(a%5);
        else
            return a;    
    }    
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=round(a[i]);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}
