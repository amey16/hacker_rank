#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n,k1;
    cin>>n>>k1;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt=0;
    int i,j,k;
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            if(a[j]-a[i]>k1)
                break;
            for(k=j+1;k<n;k++){
                if(a[j]-a[i]==k1 && a[k]-a[j]==k1)
                    cnt++;
                if(a[k]-a[j]>k1)
                    break;    
            }
            
        }
    }    
    cout<<cnt<<endl;
}
