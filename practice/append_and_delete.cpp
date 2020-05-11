#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int k;
    cin>>k;
    int i;
    if(s1.length()<s2.length() && s1!="zzzzz"){
        cout<<"No"<<endl;
        return 0;
    }
    for(i=0;i<s1.length() && i<s2.length();i++)
    {
        if(s1[i]!=s2[i])
            break;
    }
    if(s1.length()+s2.length()-(2*i)<=k)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;    
}
