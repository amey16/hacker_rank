#include<iostream>
using namespace std;
int main(int argc,char **argv){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int d1,d2;
        cin>>d1;
        cin>>d2;
        int d,h;
        if(d1>=d2){
            h=d2*(n-1);
            d=d1-d2;
        }
        else{
            h=d1*(n-1);
            d=d2-d1;
        }
        for(int j=0;j<n;j++){
            cout<<h<<" ";
            if(d1==d2)
                break;
            h+=d;
        }
        cout<<endl;
    }
}
