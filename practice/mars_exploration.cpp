#include<iostream>
#include<string>

using namespace std;
int main(int argc,char** argv){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.length();i+=3){
        if(char(s[i])!='S')
            cnt++;
        if(char(s[i+1])!='O')
            cnt++;
        if(char(s[i+2])!='S')
            cnt++;
    }
    cout<<cnt;
}
