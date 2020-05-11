#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int s,e;
        cin>>s>>e;
        int cnt=0;
        for(int j=1;j<=32000;j++){
            if(j*j>e)
                break;
            else if(j*j<s)
                continue;
            else{
                cnt++;
            }        
        }
        cout<<cnt<<endl;
    }
}
