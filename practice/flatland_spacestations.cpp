#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int maxu(int a,int b){
    if(a>b)
        return a;
    else
        return b;    
}
int main(int argc,char** argv){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=0;
    int t;    
    for(int i=0;i<m;i++){
        cin>>t;
        a[t]=1;
    }  
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    //     // a[t]=1;
    // }  
    // cout<<endl;
    int max1,min1;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            min1=i;
            break;
        }    
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            max1=i;
            break;
        }    
    }
    int j,i=min1,max2=0,u=0;
    while(i<max1){
        for(j=i+1;j<=max1;j++){
            if(a[j]==1){
                u=j;
                break;
            }    
        }
        if(max2<j-i)
            max2=j-i;
        // cout<<j-i<<" ";    
        i=j;
        // cout<<i<<endl;  
    }
    // cout<<endl;
    // cout<<max1<<" "<<min1<<" "<<max2/2<<endl;
    int mt=maxu(n-1-max1,maxu(min1,max2/2));
    cout<<mt<<endl;
}
