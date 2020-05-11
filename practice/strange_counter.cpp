#include<iostream>
using namespace std;

int main(int argc,char** argv){
    long int n;
    cin>>n;
    long int k=3;
    while(n>k){ //4
        n-=k;
        k*=2;
    }
    cout<<k-n+1<<endl;
}