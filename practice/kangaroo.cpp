#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(x1<x2){
        if(v1==v2 || v1<v2)
            cout<<"NO"<<endl;
        else{
            while(x1<x2){
                x1+=v1;
                x2+=v2;
                if(x1==x2){
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(x1>x2)
                cout<<"NO"<<endl;
        }    
    }
    else if(x1==x2){
        if(v1==v2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else{
        if(v1>=v2)
            cout<<"NO"<<endl;
        else{
            while(x1>x2){
                x1+=v1;
                x2+=v2;
                if(x1==x2){
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(x1>x2)
                cout<<"NO"<<endl;
        }    
        
    }
}
