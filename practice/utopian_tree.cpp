#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int h=1;
        for(int j=1;j<=n;j++){
            if(j%2==1)
                h*=2;
            else
                h+=1; 
            // cout<<h<<" ";       
        }
        cout<<h<<endl;
    }
}
