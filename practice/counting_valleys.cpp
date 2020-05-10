#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    int c=0;
    int t=1;
    for(int i=0;i<n-1;i++){
        char ch=s[i];
        if(ch=='U')
            cnt++;
        else
            cnt--;
        // cout<<cnt<<" ";       
        if(cnt>=0)
            t=1;
        else if(cnt<0 && t==1){
            t=0;    
            c++;
        }    
                 
        // cout<<c<<" ";
    }    
    cout<<c<<endl;
}
