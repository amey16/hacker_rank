#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    string s;
    cin>>s;
    long int n;
    cin>>n;
    long int rem=n%(s.length());
    long int quo=n/(s.length());
    long int cnt=0;
    for(long int i=0;i<s.length();i++)
        if(s[i]=='a')
            cnt++;
    cnt*=quo;        
    for(long int i=0;i<rem;i++)
        if(s[i]=='a')
            cnt++;
    cout<<cnt<<endl;
}
