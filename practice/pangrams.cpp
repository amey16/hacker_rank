#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(int argc,char** argv){
    string s;
    getline(cin,s);
    int a[26];
    for(int i=0;i<26;i++)
        a[i]=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90)
            a[int(s[i])-65]++;
        else if(s[i]>=97 && s[i]<=122)
            a[int(s[i])-97]++;  
        else
            continue;          
    }
    int k;
    for(k=0;k<26;k++)
    {
        //cout<<a[k]<<" ";
        if(a[k]==0)
            break;
    }        
    if(k==26)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;            

}
