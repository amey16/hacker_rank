#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long int b,w;
        cin>>b>>w;
        long int bc,wc,z;
        cin>>bc>>wc>>z;
        long int cost;
        if(bc+z>=wc && wc+z>=bc)
            cost=b*bc+w*wc;
        else if(bc+z<wc)
            cost=(bc+z)*w+bc*b;
        else if(wc+z<bc)
            cost=(wc+z)*b+wc*w;
        cout<<cost<<endl;            
    }
}
