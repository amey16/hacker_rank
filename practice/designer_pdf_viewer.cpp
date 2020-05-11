#include<string>
#include<iostream>
#include<climits>
using namespace std;

int main(int argc,char** argv){
    int a[26];
    for(int i=0;i<26;i++)
        cin>>a[i];
    string s;
    cin>>s;

    int max=INT_MIN;
    for(int i=0;i<s.length();i++){
        if(max<a[(int)(s[i]-'a')])
            max=a[(int)(s[i]-'a')];
    }    
    cout<<s.length()*max<<endl;
}
