#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    float p=0,ne=0,z=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0)
            ne++;
        else if(a[i]==0)
            z++;
        else
            p++;        
    }
    float d=ne+z+p;
    cout<<p/d<<endl;
    cout<<ne/d<<endl;
    cout<<z/d<<endl;
}
