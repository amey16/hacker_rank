#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int k;
    cin>>k;
    int n;
    for(int i=0;i<k;i++){
        cin>>n;
        int num=n,cnt=0;
        while(n!=0){
            int digit=n%10;
            if(digit==0){
                n=n/10;
                continue;
            }
            if(num%digit==0)
                cnt++;
            n=n/10;    
        }
        cout<<cnt<<endl;
    }
}
