#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n],r[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0)
            r[i]=1;
        else{
            if(a[i]==a[i-1])
                r[i]=r[i-1];
            else
                r[i]=r[i-1]+1;
        }
    }
    int n2;
    cin>>n2;
    int b[n2];
    int j=n-1;
    for(int i=0;i<n2;i++){
        cin>>b[i];
        if(b[i]>a[0])
            cout<<"1"<<endl;
        else if(b[i]<a[n-1])
            cout<<r[n-1]+1<<endl;
        else{
            while(b[i]>a[j])
                j--;
            if(b[i]==a[j])
                cout<<r[j]<<endl;
            else
                cout<<r[j+1]<<endl;
        }
    }
}
