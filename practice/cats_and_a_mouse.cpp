#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int a,b,c,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(b>a){
            if(b<c)
                cout<<"Cat B"<<endl;
            else if(c<a)
                cout<<"Cat A"<<endl;
        
            else{
                if(b-c>c-a)
                    cout<<"Cat A"<<endl;
                else if(c-a>b-c)
                    cout<<"Cat B"<<endl;    
                else
                    cout<<"Mouse C"<<endl;    
            }
        }
        //84 17 18
        else if(a>b){   
            if(c>a)
                cout<<"Cat A"<<endl;
            else if(c<b)
                cout<<"Cat B"<<endl;
            else{
                if(a-c>c-b)
                    cout<<"Cat B"<<endl;
                else if(c-b>a-c)
                    cout<<"Cat A"<<endl;    
                else
                    cout<<"Mouse C"<<endl;
            }
        }    
        else
            cout<<"Mouse C"<<endl;
    }   
}
