#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    int a[26];
    for(int i=0;i<26;i++)
        a[i]=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        a[(int)(s[i]-'a')]++;
    int cnt=0;
    for(int i=0;i<26;i++)
        if(a[i]%2==1)
            cnt++;
    if(cnt==0 && s.length()%2==0)
        cout<<"YES"<<endl;
    else if(cnt==1 && s.length()%2==1)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}
