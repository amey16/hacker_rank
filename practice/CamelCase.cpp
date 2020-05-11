#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(int argc,char** argv){
    string s;
    cin>>s;
    int cnt=1;
    for(int i=1;i<s.length();i++)
        if(s[i]>=65 && s[i]<=90)
            cnt++;
    cout<<cnt<<endl;        
}