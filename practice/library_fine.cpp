#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int d1,m1,y1;
    int d2,m2,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(y2<y1)
    {
        cout<<"10000"<<endl;
        return 0;
    }    
    else if(m2<m1 && y1==y2){
        cout<<(500*(m1-m2))<<endl;
        return 0;
    }
    else if(m1==m2 && d2<d1 && y1==y2){
        cout<<(15*(d1-d2))<<endl;
        return 0;
    }
    else
        cout<<"0"<<endl;

}
