#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
        cin>>a[i];
    for(int i=0;i<n2;i++)
        cin>>b[i];
    int counter=1,cnt=0;
    for(int i=1;i<=100;i++){
        for(int j=0;j<n1;j++)
            if(i%a[j]!=0)
                counter=0;
        for(int j=0;j<n2;j++)
            if(b[j]%i!=0)
                counter=0;
        if(counter==1)
            cnt++;
        counter=1;
    }
    cout<<cnt<<endl;
}
