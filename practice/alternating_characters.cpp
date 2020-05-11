#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    string s;
    int cnt=0,n;
    cin>>n;
    for(int t=0;t<n;t++){
        cin>>s;
        for(int i=1;i<s.length();i++){
            if(s[i-1]!=s[i])
                continue;
            else {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }
}
