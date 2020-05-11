#include<iostream>
#include<string>

using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    int ind=0;
    string s,chk="hackerrank";
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.length();j++){
            if(s[j]==chk[ind]){
                ind++;
                continue;
            }
        }
        if(ind==10)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;    
        ind=0;

    }
}
