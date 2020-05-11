#include<iostream>
using namespace std;

int reverse(int n){
    int num=0,digit;
    while(n!=0){
        digit=n%10;
        num=num*10+digit;
        n/=10;
    }
    return num;
}
int main(int argc,char** argv){
    int sr,er,k;
    cin>>sr>>er>>k;
    int cnt=0;
    for(int i=sr;i<=er;i++){
        if(i>reverse(i)){
            if((i-reverse(i))%k==0)
                cnt++;
        }
        else{
            if((reverse(i)-i)%k==0)
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
