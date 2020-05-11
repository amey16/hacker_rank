#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int a[s.length()-1],b[s.length()-1],k=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i+1]>s[i])
                a[k]=(int)(s[i+1]-s[i]);
            else
                a[k]=(int)(s[i]-s[i+1]);
            if(s[s.length()-1-i]>s[s.length()-2-i])
                b[k]=(int)(s[s.length()-1-i]-s[s.length()-2-i]);
            else
                b[k]=(int)(s[s.length()-2-i]-s[s.length()-1-i]);
            k++;
        }
        int index=0;
        for(index=0;index<s.length()-1;index++){
            if(a[index]!=b[index])
                break;
        }
        if(index==s.length()-1)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
    }
}
